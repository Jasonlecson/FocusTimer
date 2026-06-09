# FocusTimer Flash 占用分析报告

> 分析日期: 2026-06-09
> 硬件平台: ESP32-H2
> Flash 总量: 4 MB
> 固件分区 factory: 3 MB (0x10000 ~ 0x310000)
> 音频分区 audio: 256 KB (SPIFFS)
> 软件框架: ESP-IDF v5.5.2 + LVGL v9.4 + NimBLE

---

## 一、Flash 分区布局

```
Offset    Size       Name      说明
───────────────────────────────────────────
0x0000    0x9000     bootloader  第二阶段引导 (约 36 KB 实际)
0x9000    0x5000     nvs         非易失存储 (20 KB)
0xe000    0x2000     phy_init    PHY 校准数据 (8 KB)
0x10000   0x300000   factory     应用程序 (3 MB)
(auto)    0x40000    audio       SPIFFS 音频提示音 (256 KB)
───────────────────────────────────────────
总计: 4 MB
```

---

## 二、字体资源（Flash .rodata，最大单一消费者）

所有字体均为 **1-bpp 单色位图**，由 EEZ Studio / LVGL 字体转换器生成。

### 2.1 逐字体精确统计

| 字体 | 尺寸 | 字形数 | Bitmap | 描述符表 | CMap | Kerning | 合计 |
|------|------|--------|--------|----------|------|---------|------|
| **siyuanheiti_20** (思源黑体) | 20px | 3,332 | 133.8 KB | 52.1 KB | 6.3 KB | 4.4 KB | **196.6 KB** |
| roboto_condensed_3_100 | 100px | 96 | 28.2 KB | 1.5 KB | 0.1 KB | — | **29.8 KB** |
| dyna_puff_medium | ~30px | 96 | 9.9 KB | 1.5 KB | 0.1 KB | — | **11.5 KB** |
| roboto_condensed_3_40 | 40px | 96 | 4.6 KB | 1.5 KB | 0.1 KB | — | **6.2 KB** |
| custom_symbol_solid_26 | 26px | 102 | 4.3 KB | 1.6 KB | 0.1 KB | — | **6.0 KB** |
| custom_symbol_fa_pro_regular_26 | 26px | 75 | 2.2 KB | 1.2 KB | 0.1 KB | — | **3.5 KB** |
| siyuanheiti_16 (思源黑体) | 16px | 96 | 0.9 KB | 1.5 KB | 0.1 KB | — | **2.5 KB** |
| custom_symbol_fa_pro_regular_16 | 16px | 72 | 0.8 KB | 1.1 KB | 0.1 KB | — | **2.0 KB** |
| **字体合计** | | **3,965** | **184.7 KB** | **62.0 KB** | **7.0 KB** | **4.4 KB** | **258.1 KB** |

> **注**: `siyuanheiti_20` 包含约 3,200+ CJK 字符 + 96 ASCII 字符，占字体总量的 **76%**。

### 2.2 字体内部结构解析

以 `siyuanheiti_20` 为例，完整的 Flash 结构：

```
ui_font_siyuanheiti_20 (在 Flash .rodata 段)
├── glyph_bitmap[]        133.8 KB   字形位图数据 (uint8_t 数组)
├── glyph_dsc[]            52.1 KB   字形描述符 (3332 × 16 bytes/条)
│   └── 每条: bitmap_index(4) + adv_w(2) + box_w(2) + box_h(2)
│             + ofs_x(2) + ofs_y(2) + format(1) + padding(1)
├── unicode_list_1[]        5.4 KB   CJK 扩展区 Unicode 映射 (2768 × uint16_t)
├── unicode_list_3[]        0.9 KB   补充 CJK 映射 (451 × uint16_t)
├── cmaps[]                 0.1 KB   4 个 cmap 条目
├── kern_pair_glyph_ids[]   3.4 KB   字偶距配对 ID (871 × 2 × uint16_t)
├── kern_pair_values[]      0.9 KB   字偶距值 (871 × int8_t)
├── kern_pairs              0.1 KB   kern 描述符结构体
├── font_dsc                0.1 KB   字体自定义数据
├── cache                   0.1 KB   LVGL v8 兼容缓存
└── lv_font_t               0.1 KB   公开字体描述符
                            ───────
                            196.6 KB
```

---

## 三、应用程序代码（Flash .text + .rodata）

### 3.1 源码规模

| 类别 | 源文件总大小 | 文件数 |
|------|-------------|--------|
| 应用 Component .c 文件 | ~264 KB | ~25 个 |
| UI 屏普文件 (.c) | ~151 KB | 9 个 |
| UI 字体文件 (.c) | ~1,769 KB | 8 个 (仅占 Flash .rodata) |
| main/main.c | ~4 KB | 1 个 |
| **总源码** | **~2,160 KB** | ~43 个 |

### 3.2 编译后估测（RISC-V, -Os 优化）

| 组件 | 估计 .text | 估计 .rodata | 说明 |
|------|-----------|-------------|------|
| main (启动流程) | 1.5 KB | 0.2 KB | app_main 初始化序列 |
| ui (屏普 + 样式 + 事件) | 45 KB | 5 KB | 9 屏幕 UI 代码 |
| ble (NimBLE 应用层) | 8 KB | 1 KB | GATT 服务 + JSON 解析 |
| nvs_storage | 6 KB | 1 KB | NVS 读写 + cJSON |
| sleep + power_management | 5 KB | 0.5 KB | 休眠/电源策略 |
| lvgl_user + lvgl_indev | 4 KB | 0.5 KB | LVGL 显示+触控适配 |
| st7305_2p9 | 3 KB | 0.3 KB | 屏幕驱动 |
| aw96103 + aw32001 | 5 KB | 0.3 KB | 触摸+充电管理 |
| stcc4 | 3 KB | 0.3 KB | CO2/温湿度 |
| imu | 6 KB | 0.3 KB | 6轴传感器 + 翻转检测 |
| pcf85263a | 2 KB | 0.2 KB | RTC 驱动 |
| battery | 2 KB | 0.2 KB | 电池估算 |
| max98357 | 4 KB | 0.3 KB | I2S 音频 |
| sdspi | 2 KB | 0.2 KB | SD 卡 SPI |
| spi_shared_lock + pinmap | 0.5 KB | — | 总线锁+引脚映射 |
| **应用代码合计** | **~97 KB** | **~10 KB** | ≈ **107 KB** |

---

## 四、ESP-IDF 框架（Flash .text + .rodata）

| 框架组件 | 估计大小 | 说明 |
|----------|----------|------|
| **LVGL 核心库** | 60 KB | v9.4, 1-bit 色深, 关闭 RGB565/888/ARGB, SIMPLE/MONO 主题 |
| **NimBLE 协议栈** | 130 KB | Host + Controller, BLE 4.2, 最小配置 (1连接/0绑定) |
| **FreeRTOS** | 20 KB | v10.x, tickless idle, 1000Hz tick |
| **FATFS + SD SPI VFS** | 25 KB | LFN, CP936 中文编码, FAT32 |
| **SPI 驱动** | 6 KB | SPI2 (LCD + SD 共用) |
| **I2C 驱动** | 6 KB | I2C0 (所有传感器共用) |
| **I2S 驱动** | 6 KB | I2S0 (MAX98357 音频) |
| **GPIO + RTC GPIO** | 3 KB | 触摸中断 + deep-sleep 唤醒 + 电源键 |
| **NVS Flash** | 10 KB | 非易失存储 + 磨损均衡 |
| **ESP PM (电源管理)** | 5 KB | 动态调频 + light sleep |
| **ESP Sleep** | 4 KB | deep sleep + timer/ext1 唤醒 |
| **ADC 驱动** | 4 KB | 电池电压采样 |
| **esp_timer** | 3 KB | 高精度软件定时器 |
| **newlib C 库 (子集)** | 35 KB | printf, malloc, memcpy, strlen, math 等 |
| **ESP 系统核心** | 12 KB | 启动、日志、错误处理、分区表 |
| **其他 (cJSON, boot 遗留等)** | 8 KB | |
| **框架合计** | **~337 KB** | |

---

## 五、Flash 占用全景

```
Flash 4MB 占用全景 (单位: KB)

┌──────────────────────────────────────────────────────────────┐
│ 区域                   大小 (KB)   占总量    说明             │
├──────────────────────────────────────────────────────────────┤
│ bootloader              ~36 KB    0.9%      ESP 第二阶段引导 │
│ partition table           4 KB    0.1%      CSV 分区表       │
│ NVS                      20 KB    0.5%      非易失存储       │
│ phy_init                  8 KB    0.2%      PHY 校准         │
├──────────────────────────────────────────────────────────────┤
│ ===== factory 分区 (3 MB) 开始 =====                         │
│                                                              │
│ 字体 .rodata          ~258 KB    6.3%     ▓▓▓▓▓▓▓▓▓▓▓▓     │
│   ├─ siyuanheiti_20    197 KB    4.8%     最大单一字体       │
│   └─ 其余 7 个字体      61 KB    1.5%                       │
│                                                              │
│ 应用代码 .text + .rodata                                    │
│   .text               ~97 KB     2.4%     ▓▓▓▓▓▓▓           │
│   .rodata             ~10 KB     0.2%     ▓                 │
│                                                              │
│ ESP-IDF 框架                                                 │
│   LVGL                ~60 KB     1.5%     ▓▓▓▓              │
│   NimBLE             ~130 KB     3.2%     ▓▓▓▓▓▓▓▓▓        │
│   FreeRTOS            ~20 KB     0.5%     ▓                 │
│   FATFS + SD SPI      ~25 KB     0.6%     ▓▓               │
│   newlib               ~35 KB     0.9%     ▓▓               │
│   驱动 (SPI/I2C/I2S)   ~18 KB     0.4%     ▓                │
│   ESP 系统 + 其他      ~49 KB     1.2%     ▓▓▓              │
│                                                              │
│ 固件小计              ~702 KB    17.1%                       │
│ factory 剩余空间     ~2,370 KB    57.9%    空闲               │
│                                                              │
│ ===== factory 分区结束 =====                                 │
├──────────────────────────────────────────────────────────────┤
│ audio (SPIFFS)         173 KB    4.2%      timeout.bin       │
│ audio 剩余空间          83 KB    2.0%     空闲               │
└──────────────────────────────────────────────────────────────┘

Flash 实际使用: ~943 KB (bootloader + 分区表 + NVS + phy + 固件 + audio)
Flash 剩余可用: ~3,153 KB
Flash 使用率: 23.0%
```

---

## 六、Flash 消费者排行

| 排名 | 项目 | 大小 | 占 Flash | 可否削减 |
|------|------|------|----------|----------|
| 🥇 | **siyuanheiti_20 字体** | 197 KB | 4.8% | ✅ 最大潜力 |
| 🥈 | **audio/timeout.bin** | 173 KB | 4.2% | 可压缩 WAV |
| 🥉 | **NimBLE 协议栈** | 130 KB | 3.2% | ❌ 已最小配置 |
| 4 | **应用 UI 代码** | 97 KB | 2.4% | ⚠️ 不可删减功能 |
| 5 | **LVGL 库** | 60 KB | 1.5% | ⚠️ 已裁剪到极限 |
| 6 | 其余 7 个字体 | 61 KB | 1.5% | 可合并/裁剪 |
| 7 | newlib C 库 | 35 KB | 0.9% | ❌ 系统必需 |
| 8 | FATFS + SD SPI | 25 KB | 0.6% | ❌ 必需 |
| 9 | FreeRTOS | 20 KB | 0.5% | ❌ 必需 |
| 10 | 其他框架 | 87 KB | 2.1% | ❌ 系统必需 |

---

## 七、优化建议

### 7.1 字体瘦身（最大优化空间，省 100+ KB）

**siyuanheiti_20 占据 197 KB，76% 的字体空间**，主要原因是包含了约 3,200 个 CJK 汉字。如果实际 UI 只用到少数中文字符：

1. **子集化**：用 `--symbols` 参数只保留实际使用的字符，而非全量 CJK 字符集。估计实际用到不超过 200 个汉字 → 可省 **~150 KB**。
2. **字体尺寸合并**：`siyuanheiti_16` (2.5KB) 和 `siyuanheiti_20` (197KB) 可以考虑只保留 20px 版本，用 LVGL 的缩放功能替代 16px → 省 2.5KB。
3. **符号字体合并**：3 个 FontAwesome 字体 (共 11.5KB) 可合并为一个 → 省 ~2KB。

**预估总节省: 120-160 KB**

### 7.2 音频压缩（省 50-80 KB）

- `timeout.bin` 当前 173 KB，3 秒单声道 22050Hz 16-bit 理论仅 ~129 KB。实际偏大可能是包含了较长的静默或多余数据。
- 进一步降低采样率至 11025Hz → 理论可缩至 ~65 KB。
- **预估节省: 50-100 KB**

### 7.3 代码层面（省 10-30 KB）

- 关闭 LVGL 未使用的 widget 类型（如 chart, calendar, table, dropdown 等）→ 省 ~10-20 KB
- FatFS 如不需要写文件（只读 SD 卡），可裁剪写相关代码 → 省 ~5 KB
- NVS Storage 的 cJSON 如果仅用于 BLE JSON 解析且场景简单，可以换用更轻量的解析器 → 省 ~5-10 KB

---

## 八、结论

FocusTimer 当前 Flash 使用情况：

| 指标 | 数值 |
|------|------|
| 固件大小 (factory 分区) | **~702 KB** |
| 固件占 factory 分区比例 | **22.9%** (3 MB 中) |
| Flash 总使用量 (含所有分区) | **~943 KB** |
| Flash 总使用率 | **23.0%** (4 MB 中) |
| **Flash 剩余可用** | **~3,153 KB** |
| OTA 升级余量 | factory 分区闲置 **~2,370 KB**，足够容纳多份固件 |

**Flash 完全不是瓶颈**。固件仅占 factory 分区的 23%，剩余超过 2.3 MB 空间。即使开启 OTA 双区升级也绰绰有余。

若需优化，最大的两个目标分别是：
1. **siyuanheiti_20 字体子集化**（197 KB → 可降至 ~40 KB）
2. **音频提示音压缩**（173 KB → 可降至 ~65 KB）

合计可节省约 **260 KB**，但对于 4 MB Flash 来说意义不大，除非需要为 OTA 或其他数据分区腾挪空间。
