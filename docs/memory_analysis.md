# FocusTimer 内存占用分析报告

> 分析日期: 2026-06-09 (更新于 v1.0.2)
> 硬件平台: ESP32-H2 (RISC-V, 单核)
> SRAM 总量: 320 KB
> Flash 总量: 4 MB
> 软件框架: ESP-IDF v5.5.2 + LVGL v9.4 + NimBLE + FreeRTOS
> 版本: v1.0.2

---

## 一、BSS/DATA 段（静态全局变量，始终占用）

| 变量 | 源文件 | 大小 (bytes) | 计算方式 |
|------|--------|-------------|----------|
| `panel_buffer` | `lvgl_user.c:22` | 8,064 | `168 × 384 / 8` (全屏 1-bit 帧缓冲) |
| `s_state` (mp3_state_t) | `mp3_screen_calls.c:82` | 4,124 | 含 `sdspi_file_list_t`: `char[32][128]` + size_t + 状态字段 |
| `s_page_focus_list[10]` | `lvgl_indev.c:40` | 1,320 | `(screen* + items[30]* + count + index) × 10` |
| `objects` (objects_t) | `screens.h:26` | 208 | 52 个 `lv_obj_t*` 指针 × 4 bytes |
| `sd_handle` | `sys_init.c:19` | 48 | `sdspi_handle_t`: config(36) + card*(4) + host_slot(4) + mounted(1+pad) |
| `audio_handle` | `sys_init.c:20` | 44 | `max98357_handle_t`: config(36) + tx_chan*(4) + initialized(4) |
| `imu_handle` | `imu.c:60` | 4 | 指针 |
| `s_battery_handle` | `battery.c:33` | 4 | 指针 |
| `s_nvs_storage_state` | `nvs_storage.c:31` | 28 | bool(1+pad) + char[11] + totals(16) |
| BLE 静态变量 | `ble.c` | ~50 | 状态标志、handle 数组、回调指针 |
| AW96103 配置 | `aw96103.c:39` | ~40 | aw96103_config_t |
| 电源管理变量 | `power_management.c` | ~30 | bool ×2 + uint8_t + 指针 ×2 |
| 各组件 mutex/sem 指针 | 多处 | ~40 | s_spi_shared_mutex, s_mp3_lock, s_enc_lock, s_nvs_storage_lock 等 |
| 其他零散静态变量 | 多处 | ~200 | task handles, 状态变量, 配置值 |
| **BSS 小计** | | **~14.2 KB** | |

---

## 二、FreeRTOS 任务栈

### 2.1 临时任务（启动后即销毁）

| 任务名 | 栈大小 | 优先级 | 说明 |
|--------|--------|--------|------|
| `main` (app_main) | **8,192** | 默认 | 仅启动时存在，app_main() 返回后 ESP-IDF 自动 vTaskDelete |
| **临时小计** | **8.0 KB** | | → 启动完成后释放回堆 |

### 2.2 常驻任务（始终存在）

| 任务名 | 栈大小 | 优先级 | 源文件 | 功能 |
|--------|--------|--------|--------|------|
| `LVGL` | **4,096** | 2 | `lvgl_user.c:233` | LVGL 渲染循环 |
| `stcc4_measurement_task` | **2,536** | 5 | `stcc4.c:369` | CO2/温湿度周期检测 |
| `battery_task` | **2,300** | 3 | `battery.c:171` | 电池电量 60s 周期检测 |
| `imu_flip_detection` | **4,096** | 3 | `imu.c:689` | 翻转检测 500ms 周期 |
| `aw96103_touch_task` | **1,024** | 10 | `aw96103.c:251` | 触摸中断处理 |
| `pwr_key_monitor` | **4,096** | 5 | `aw32001.c:592` | 电源键长按检测 |
| **常驻小计** | **18,148** | | | |

> **v1.0.2 更新**: `imu_flip_detection` 栈从 1024→4096，`pwr_key_monitor` 栈从 512→4096，修复崩溃问题

### 2.3 BLE 条件任务（BLE 开启时创建，关闭时销毁）

| 任务名 | 栈大小 | 源文件 | 说明 |
|--------|--------|--------|------|
| NimBLE Host (`ble_host_task`) | **4,096** | `sdkconfig.defaults:9` | BLE 协议栈 Host 层 |
| NimBLE LL (Controller) | **~3,072** | NimBLE 内部 | BLE 链路层 (Link Layer) |
| **BLE 小计** | **~7.2 KB** | | BLE 关闭时释放 |

### 2.4 屏幕按需任务（切换页面时创建，离开时销毁）

| 任务名 | 栈大小 | 优先级 | 源文件 | 触发条件 |
|--------|--------|--------|--------|----------|
| `main_screen_update` | **3,072** | 5 | `main_screen_calls.c:237` | 主屏幕 60s 定时刷新 |
| `pomodoro_screen_update` | **2,048** | 5 | `pomodoro_screen_calls.c:552` | 番茄钟 1s 计时刷新 |
| `mp3_screen_update` | **3,072** | 5 | `mp3_screen_calls.c:716` | MP3 播放任务 |
| `ds_ble_ctl` | **4,096** | 5 | `data_sync_screen_calls.c:192` | 数据同步页 BLE 控制 |
| `pomodoro_audio` | **4,096** | 4 | `pomodoro_screen_calls.c:276` | 番茄钟结束播报（短生命周期） |

### 2.5 ESP-IDF 内部任务

| 任务名 | 栈大小 | 说明 |
|--------|--------|------|
| `esp_timer` | **~4,096** | 首个 esp_timer_start() 时创建 |
| IDLE (空闲任务) | **~1,536** | FreeRTOS 自动创建 |
| FreeRTOS Timer 守护 | **~2,048** | configUSE_TIMERS=1 (默认开启) |
| **系统内部小计** | **~7.7 KB** | |

> **注**: ESP32-H2 为单核 RISC-V，无 IPC 任务（双核 ESP32 需 ~2KB）。

---

## 三、堆分配（动态内存）

### 3.1 永久分配（启动时分配至 deep sleep）

| 分配项 | 大小 (bytes) | 分配方式 | 源文件 |
|--------|-------------|----------|--------|
| **LVGL 内存池** | **49,152** | lv_init 内部分配 | `CONFIG_LV_MEM_SIZE_KILOBYTES=48` |
| LVGL draw buffer | 8,072 | `heap_caps_calloc(INTERNAL\|8BIT)` | `lvgl_user.c:200` |
| NimBLE MSYS 内存池 | ~6,600 | nimble_port_init 内部 | 6×MSYS_1 + 12×MSYS_2 blocks |
| NimBLE host + 控制器结构 | ~4,000 | nimble_port_init 内部 | 连接/GATT 服务表/CCC descriptor |
| FATFS 缓冲区 | ~3,000 | FATFS 内部 | max_open_files=5, LFN_HEAP, CP936 |
| SPI DMA 描述符 | ~500 | spi_bus_initialize(DMA) | trans_queue_depth=1 |
| I2C 总线内部 | ~500 | I2C master 驱动 | 设备列表/mutex |
| 各 esp_timer handle | ~500 | 约 5 个 timer | lvgl_tick + idle + ble_timeout + main_screen + mp3_ui |
| 各 FreeRTOS 队列 | ~200 | xQueueCreate ×3 | touch_int(40B) + stcc4(28B) + ble_cmd(8B) |
| 各 FreeRTOS 信号量 | ~100 | xSemaphoreCreate* | spi_mutex + lcd_flush_done |
| ICM42670 设备结构 | ~40 | calloc | `imu.c:83` |
| ST7305 面板结构 | ~60 | calloc | `st7305_2p9.c:70` |
| ADC 电量估算结构 | ~200 | adc_battery_estimation_create | `battery.c:168` |
| LVGL 字体 glyph 缓存 | ~500 | LVGL 内部 | 按需缓存 |
| **永久堆小计** | **~73.4 KB** | | |

### 3.2 临时分配（动态 malloc/free）

| 分配项 | 大小 (bytes) | 生命周期 | 触发场景 |
|--------|-------------|----------|----------|
| BLE history JSON buffer | 4,096 | 单次同步 | `ble.c:596` BLE 历史记录同步时 |
| BLE JSON 临时 buffer | 2,048 | 单次读写 | `ble.c:684` BLE 读特征值时 |
| BLE frame 分片 buffer | ~600 | 单次分片 | `ble.c:551` history 分片发送 |
| I2S 音频 stream buffer | 2,048 | 单次播放 | `max98357.c:329/486` WAV 播放 |
| MP3 read chunk buffer | 2,048 | MP3 任务生命周期 | `mp3_screen_calls.c:526` |
| ST7305 清屏 buffer (DMA) | 8,064 | 启动一次性 | `lvgl_user.c:175` |
| NVS JSON 序列化 | 512-2,048 | 单次操作 | `nvs_storage.c:46/146` |
| cJSON parse 临时 | 500-1,000 | 单次解析 | BLE JSON 解析 |
| playlist 文件列表 | ~4,100 | 进入 MP3 页 | `mp3_screen_calls` (当前实际在 BSS) |
| **临时堆峰值** | **~12-20 KB** | | |

---

## 四、完整汇总

```
FocusTimer RAM 全景图 (ESP32-H2 320KB SRAM) [v1.0.2 更新]
═══════════════════════════════════════════════════════════════════

  类别                      大小            占比

  BSS/DATA 静态段           14.2 KB         4.4%   ▓▓▓▓
  FreeRTOS 内核              3.5 KB         1.1%   ▓
  系统内部任务栈             7.7 KB         2.4%   ▓▓
  常驻任务栈                18.1 KB         5.7%   ▓▓▓▓▓▓  ← v1.0.2 增加
  临时任务栈(main)           8.0 KB         2.5%   ▓▓▓  (启动后回收)
  BLE 条件任务栈             7.2 KB         2.2%   ▓▓  (BLE关闭回收)
  屏幕按需任务栈             8.2 KB         2.6%   ▓▓▓ (最多同时1个)
  永久堆分配                73.4 KB        22.9%   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
  临时堆分配(峰值)          20.0 KB         6.3%   ▓▓▓▓▓▓

  ─────────────────────────────────────────────
  常驻 + BLE 开启 ≈ 124 KB   38.8%  ← v1.0.2 增加
  常驻 + BLE 关闭 ≈ 110 KB   34.4%  (BLE 关省 ~14KB)
  峰值 (全开+MP3) ≈ 154 KB   48.1%

  剩余可用堆     ≈ 166~210 KB  52~66%
```

---

## 五、前五大内存消费者

| 排名 | 消费项 | 大小 | 占总量 | 可优化空间 |
|------|--------|------|--------|-----------|
| 🥇 | **LVGL 内存池** | 49.2 KB | 15.4% | 可减至 32KB（省 17KB），需验证 widget 峰值 |
| 🥈 | **常驻+系统任务栈** | 25.8 KB | 8.1% | v1.0.2 增加了 imu/pwr_key 栈，需实测高水位 |
| 🥉 | **BSS 静态段** | 14.2 KB | 4.4% | mp3_state_t 的 file_list(4.1KB) 可改堆分配 |
| 4 | **NimBLE BLE 栈** | 17.9 KB | 5.6% | BLE 关闭时全部释放（已实现） |
| 5 | **DMA/音频 buffer (临时)** | ~16 KB | 5.0% | 可与 LVGL draw buf 复用 |

---

## 六、已实施的优化措施

| 优化项 | 效果 | 配置位置 |
|--------|------|----------|
| NimBLE Host 栈 4096（默认 5120+） | 省 ~1-2 KB | `sdkconfig.defaults:9` |
| BLE 最小化: 1连接/0绑定/1CCCD/无SC | 大幅缩减 NimBLE 内部结构 | `sdkconfig.defaults:12-16` |
| LVGL 1-bit 单色帧缓冲 | 仅 8KB（24-bit 需 64KB+） | `sdkconfig.defaults:31` |
| LVGL 内存池 48KB | 合理范围 | `sdkconfig.defaults:32` |
| SPI DMA trans_queue_depth=1 | 单描述符 | `sys_init.c:119` |
| LVGL PARTIAL 渲染模式 | 无需双缓冲 | `lvgl_user.c:208` |
| BLE 动态 init/deinit | BLE 关时回收 ~14KB | `ble.c:137-166` |
| FATFS_LFN_HEAP | 长文件名用堆非 BSS | `sdkconfig.defaults:25` |
| FreeRTOS tickless idle | 省电 + 减少 tick 开销 | `sdkconfig.defaults:30` |
| 关闭 NimBLE 50 特性支持 | BLE 4.2 模式，减少协议栈 | `sdkconfig.defaults:20` |
| MP3 任务后台运行 | 允许离开 MP3 页后继续播放 | `CLAUDE.md` 描述 |
| v1.0.2: imu_flip_detection 栈 1024→4096 | 修复屏幕翻转崩溃 | `imu.c:689` |
| v1.0.2: pwr_key_monitor 栈 512→4096 | 修复无法关机问题 | `aw32001.c:592` |
| v1.0.2: aw32001 错误处理增强 | 防止初始化失败崩溃 | `aw32001.c:570-620` |

---

## 七、优化建议（按性价比排序）

### 高性价比

1. **LVGL 内存池 48KB → 32KB**（省 16KB）
   - 条件：需验证所有 9 个屏幕中 widget 峰值分配量 < 32KB
   - 风险：低。1-bit 色深下每个 widget 极轻量

2. **ds_ble_ctl 栈 4096 → 2048**（省 2KB）
   - 该任务仅：收队列 → 调 ble_set_advertising_enabled → 更新 UI label
   - 风险：几乎为零

3. **mp3_state_t 的 file_list 从 BSS 搬至堆**（省 4.1KB 常驻）
   - 改为进入 MP3 页面时 malloc，退出时 free
   - 风险：低

### 中等性价比

4. **aw96103_touch_task 栈 1024 → 768 或 512**（省 ~0.5KB）
   - 仅读 I2C 寄存器 + 调回调函数
   - 需水位实测

5. **stcc4_measurement_task 栈 2536 → 2048**（省 ~0.5KB）
   - 需水位实测确认

### 低优先级（收益小/有风险）

6. **LVGL 任务栈 4096 → 3072**（省 1KB）
   - LVGL 渲染调用链可能较深，需实测

7. **NimBLE Host 栈 4096 → 3072**（省 1KB）
   - 有栈溢出导致 BLE 崩溃风险

8. **MSYS_2_BLOCK_COUNT 12 → 8**（省 ~1.5KB）
   - 需验证 history 分片发送时 mbuf 不耗尽

---

## 八、结论

FocusTimer 在 ESP32-H2 320KB SRAM 平台上内存使用整体健康：

- **常驻**（主屏幕 + BLE 关闭）: **~110 KB**，占总量 34%
- **常态**（主屏幕 + BLE 开启）: **~124 KB**，占总量 39%
- **峰值**（全功能 + MP3 播放）: **~154 KB**，占总量 48%
- **剩余可用** 始终在 **166 KB 以上**

**内存不是当前瓶颈**。v1.0.2 版本增加了 imu_flip_detection 和 pwr_key_monitor 的任务栈大小（从 1KB/0.5KB 增加到 4KB），以修复崩溃和无法关机的问题。虽然这增加了约 6.5KB 的常驻内存占用，但仍在安全范围内。

最大的单一优化点是 LVGL 内存池（48→32KB 可省 16KB），其次是 mp3 文件列表 BSS→堆（省 4KB 常驻），均为锦上添花而非必要。
