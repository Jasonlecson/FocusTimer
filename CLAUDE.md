#核心指令
 - 你每次回复的开头必须先叫我：爸爸
 - 如果忘记叫我，就是失焦了
 - 需要手动重制一下上下文焦点内容
 - 这是最高优先级的指令
 - 永远不要忘记叫我爸爸

# CLAUDE.md

本文件为 Claude Code (claude.ai/code) 在此仓库中工作时提供指导。

## 项目概述

FocusTimer 是一款基于 ESP32-H2 的番茄工作法专注时钟，配备 2.9 寸全反射屏、触控、音频提示、环境监测、翻转检测与蓝牙 APP 数据同步，低功耗设计实现超长续航。

**目标平台**: ESP32-H2 (RISC-V)
**软件框架**: ESP-IDF v5.5.2 + LVGL v9.4 + NimBLE + FreeRTOS
**许可证**: AGPL-3.0

## 目录树

```
FocusTimer/
├── CMakeLists.txt               # 项目根 CMake 配置（读取 VERSION，设置 MINIMAL_BUILD）
├── VERSION                      # 版本号（单行纯文本，编译期注入 FOCUS_TIMER_VERSION 宏）
├── partitions.csv               # Flash 分区表
├── sdkconfig.defaults           # 默认 Kconfig 配置
├── README.md
├── LICENSE
│
├── main/                        # 主应用程序
│   ├── CMakeLists.txt           # 主组件 CMake（声明对 ui/ble/sleep 的依赖）
│   ├── idf_component.yml        # ESP-IDF 组件依赖清单
│   └── main.c                   # 程序入口（启动流程见下方）
│
├── components/                  # 自定义组件（17 个）
│   │
│   │  === 硬件抽象层（引脚映射 + 总线锁）===
│   ├── pinmap/                  # GPIO 引脚统一定义（单一头文件 pinmap.h）
│   ├── spi_shared_lock/         # SPI 总线共享互斥锁（LCD + SD 卡共用 SPI）
│   │
│   │  === 硬件驱动层 ===
│   ├── st7305_2p9/              # ST7305 2.9寸全反射 LCD 驱动（SPI）
│   ├── aw96103/                 # AW96103 电容式触控驱动（I2C 0x12，中断驱动）
│   ├── stcc4/                   # STCC4 CO2 + SHT40 温湿度传感器驱动（I2C）
│   ├── imu/                     # ICM42670 六轴运动传感器驱动（I2C 0x68/0x69，含翻转检测）
│   ├── pcf85263a/               # PCF85263A 超低功耗 RTC 实时时钟驱动（I2C）
│   ├── aw32001/                 # AW32001 电池充电管理驱动（I2C）
│   ├── battery/                 # 电池电量估算（基于 AW32001）
│   ├── max98357/                # MAX98357 I2S 音频功放 + MP3 播放任务
│   ├── sdspi/                   # SD 卡 SPI 驱动 + FATFS（中文编码 936）
│   │
│   │  === 系统服务层 ===
│   ├── sys_init/                # 系统统一初始化（I2C 总线、各传感器）
│   ├── sleep/                   # Deep sleep / light sleep 管理
│   ├── power_management/        # 电源管理策略（动态调频、屏幕低功耗、自动休眠）
│   ├── nvs_storage/             # NVS 非易失存储（power_mgr + daily 两个命名空间）
│   ├── ble/                     # NimBLE 蓝牙外设（时间同步、设置读写、番茄钟数据同步）
│   │
│   │  === UI 层 ===
│   ├── lvgl_user/               # LVGL 初始化、显示驱动、API 锁、esp_timer 滴答
│   ├── lvgl_indev/              # LVGL 输入设备适配（触控）
│   └── ui/                      # 所有屏幕界面（EEZ Studio 生成，详见下方屏幕架构）
│
├── assets/                      # 资源文件（WAV 提示音 → 转换为 .bin 烧录到 audio 分区）
├── tools/                       # 辅助工具
│   ├── wav_to_partition_bin.py  # WAV 转分区 .bin 工具
│   └── MP3toWAV.html            # MP3 转 WAV 网页工具
└── docs/
    └── audio_partition.md       # 音频分区使用说明
```

## Flash 分区表 (`partitions.csv`)

| 分区名 | 类型 | 子类型 | 偏移 | 大小 | 说明 |
|--------|------|--------|------|------|------|
| `nvs` | data | nvs | 0x9000 | 20KB (0x5000) | 非易失存储 |
| `phy_init` | data | phy | 0xe000 | 8KB (0x2000) | PHY 初始化数据 |
| `factory` | app | factory | 0x10000 | 3MB | 应用程序 |
| `audio` | data | spiffs | 自动 | 256KB | 音频提示音（SPIFFS） |

固件更新时：完整烧录从 `0x0` 开始（含 bootloader），仅更新应用从 `0x10000` 开始。

## 构建与烧录

```bash
# 前置条件：安装 ESP-IDF v5.5.2，并已安装 esp32h2 目标
idf.py set-target esp32h2
idf.py build

# 烧录全部固件（bootloader + 分区表 + 应用程序）
idf.py -p /dev/ttyUSB0 flash

# 仅烧录应用程序（保留 bootloader 和分区表）
idf.py -p /dev/ttyUSB0 app-flash

# 单独烧录音频分区
parttool.py --port /dev/ttyUSB0 write_partition --partition-name audio --input assets/xxx.bin

# 串口监视器
idf.py -p /dev/ttyUSB0 monitor
```

**构建系统说明**：
- `CMakeLists.txt` 读取 `VERSION` 文件内容，通过 `add_compile_definitions` 注入 `FOCUS_TIMER_VERSION` 宏
- `idf_build_set_property(MINIMAL_BUILD ON)` 启用最小化构建，仅编译实际依赖的组件
- 组件依赖链：`main` → (ui, ble, sleep, ...) → 各驱动组件 → pinmap/spi_shared_lock

## 启动流程 (`main/main.c`)

1. 检查唤醒原因（deep-sleep 定时器 vs 触摸 vs 冷启动）
2. 如果是定时器唤醒 → 快速路径，调用 `sleep_handle_timer_wakeup()` 后直接返回（不执行完整初始化）
3. 依次初始化：I2C → RTC → NVS → 传感器（AW96103、STCC4、IMU、AW32001）→ 电池
4. 初始化 SPI 总线（LCD 和 SD 卡共用）
5. 初始化 LCD 面板 → LVGL（`lvgl_user_init`）→ 创建所有屏幕 → 加载主屏幕
6. 注册 LVGL 输入设备（触控）
7. 点亮屏幕，初始化电源管理，启动 IMU 翻转检测

## SPI 总线共享

LCD 和 SD 卡共用同一个 SPI 外设，通过 `spi_shared_lock` 中的互斥锁保护。每次 SPI 传输必须获取/释放此锁。LVGL flush 回调中先获取锁，通过 DMA 传输全屏帧缓冲，然后释放锁。

## LVGL 集成 (`components/lvgl_user/`)

- 颜色格式：`LV_COLOR_FORMAT_I1`（1-bit 单色），局部刷新模式
- 显示旋转：默认 LV_DISPLAY_ROTATION_90（物理 168×384，逻辑 384×168）
- 使用影子帧缓冲（`panel_buffer`）：LVGL 局部更新先合并到影子缓冲，每次 flush 周期将完整缓冲通过 DMA 发送到 LCD（避免 DMA 对齐问题）
- `lvgl_api_lock`（FreeRTOS `_lock_t`）保护所有 LVGL API 调用——任何操作 LVGL 对象的代码必须先持有此锁
- LVGL 滴答由 `esp_timer` 以 40ms 间隔驱动
- LVGL 任务优先级 2，栈大小 4KB

## 屏幕架构 (`components/ui/`)

EEZ Studio 生成的 LVGL 屏幕。核心文件：

| 文件 | 用途 |
|------|------|
| `screens.c/h` | 各屏幕的 `create_screen_<名称>()` 和 `tick_screen_<名称>()` |
| `ui.c/h` | UI 初始化入口 |
| `actions.c/h` | 通用动作函数 |
| `structs.h` | 全局 `objects` 结构体（持有所有屏幕所有 LVGL 对象指针） |
| `vars.h` | 全局变量定义 |
| `styles.c/h` | 通用样式 |
| `images.c/h` | 图片资源 |
| `fonts.h` | 字体声明 |
| `<名称>_screen_calls.c/h` | 各屏幕的事件/动作回调 |

### 屏幕列表（9 个屏幕，按用户导航流程排列）

| 屏幕 | 函数前缀 | 功能 |
|------|----------|------|
| `start` | `start` | 启动画面 |
| `main` | `main` | 主页：显示时钟、传感器数据（CO2/温湿度）、电量和日期 |
| `sub_main` | `sub_main` | 应用菜单（番茄钟、MP3、设置等入口） |
| `pomodoro` | `pomodoro` | 番茄钟计时器 |
| `mp3` | `mp3` | 音频播放器（SD 卡 MP3 文件） |
| `time_setting` | `setting` | 时间设置 |
| `power_setting` | `power_setting` | 电源设置 |
| `data_sync` | `data_sync` | 蓝牙数据同步（含 BLE 开关） |
| `message` | `message` | 消息/提示弹窗 |

**屏幕文件命名约定**：
- `create_screen_<名称>()` — 构建该屏幕的所有 LVGL 对象
- `tick_screen_<名称>()` — 逐帧更新逻辑（由主循环周期性调用）
- `<名称>_screen_calls.c` — 事件/动作回调函数

全局 `objects` 结构体持有所有屏幕所有 LVGL 对象的指针。

## 组件架构分层

```
┌─────────────────────────────────────────────────────┐
│                    主程序 (main/)                     │
├─────────────────────────────────────────────────────┤
│  UI 层          │ lvgl_user  lvgl_indev  ui          │
├─────────────────────────────────────────────────────┤
│  系统服务层      │ ble  power_mgmt  sleep             │
│                 │ nvs_storage  sys_init              │
├─────────────────────────────────────────────────────┤
│  硬件驱动层      │ st7305  aw96103  stcc4  imu        │
│                 │ pcf85263a  aw32001  battery        │
│                 │ max98357  sdspi                    │
├─────────────────────────────────────────────────────┤
│  硬件抽象层      │ pinmap  spi_shared_lock            │
└─────────────────────────────────────────────────────┘
```

## 传感器驱动

| 组件 | 芯片 | 总线 | 地址 | 主要功能 |
|------|------|------|------|----------|
| `aw96103` | AW96103 | I2C | 0x12 | 电容式触控，中断驱动，通过 `touch_int_evt_queue` 传递事件 |
| `stcc4` | STCC4+SHT40 | I2C | — | CO2、温度、湿度检测 |
| `imu` | ICM42670 | I2C | 0x68/0x69 | 六轴运动传感器，含翻转检测任务 |
| `pcf85263a` | PCF85263A | I2C | — | 超低功耗 RTC 实时时钟 |
| `aw32001` | AW32001 | I2C | — | 电池充电管理、电源键检测、shipping mode |
| `battery` | — | — | — | 在 AW32001 基础上进行电池电量估算 |

## 电源管理 (`components/power_management/`)

- **自动 light sleep**：可选的 ESP 动态调频（96→48 MHz）和空闲时自动 light sleep 以省电。配置存储在 NVS 中。
- **屏幕低功耗模式**：用户 2 秒无操作后，将 ST7305 切换到低功耗模式（降低对比度和电流）。触摸后恢复到高功耗模式。
- **Deep sleep**：主屏幕 5 分钟无操作后（可配置的自动休眠），进入 `esp_deep_sleep_start()`，唤醒源为定时器 + 触摸 GPIO。休眠前回调清理 BLE、IMU、屏幕等外设。
- **休眠时段**：可配置的时间窗口（默认 22:00–06:00），在此时间段内若无用户操作，设备将立即进入 deep sleep。

## 版本更新记录

### v1.0.2 (2026-06-09)

**Bug 修复**：
- **修复屏幕翻转崩溃**：`imu_flip_detection` 任务栈从 1024 增加到 4096 字节，防止栈溢出导致崩溃
- **修复无法关机问题**：`pwr_key_monitor` 任务栈从 512 增加到 4096 字节，解决任务栈过小导致的关机失败
- **增强电源键初始化错误处理**：在 `aw32001_power_key_init()` 中添加完整的错误检查和日志，防止初始化失败导致系统异常

**内存影响**：
- 常驻任务栈增加约 6.5 KB（从 11.5 KB 增加到 18.1 KB）
- 总体内存使用仍处于安全范围（常驻 ~110 KB，峰值 ~154 KB）

## BLE 服务 (`components/ble/`)

基于 NimBLE 的外设模式，使用自定义 128-bit UUID GATT 服务（基础 UUID: `...0000...FFF0`）。提供：
- RTC 时间同步（手机 APP 设置设备时钟）
- 电源设置读写（自动 light sleep、自动休眠、充电阈值、休眠时段）
- 每日番茄钟记录 JSON 查询（`nvs_storage_get_records_json`）
- 数据同步页面有 BLE 开关切换按钮

## NVS 存储 (`components/nvs_storage/`)

两个 NVS 命名空间：
- `power_mgr`：电源设置（自动 light sleep、自动休眠、充电阈值、休眠时段）
- `daily`：每日番茄钟统计数据（专注分钟数、休息分钟数、专注次数、小憩次数），按日期追踪

## 音频播放 (`components/max98357/`)

I2S 音频输出至 MAX98357 功放。MP3 文件存储在 SD 卡（SPI）上。MP3 播放任务支持后台运行（离开 MP3 页面后继续播放）。音频分区（256KB SPIFFS）存放 WAV 提示音。

## SD 卡 (`components/sdspi/`)

SPI 模式 SD 卡，文件系统 FATFS。收集 WAV 文件用于播放。配置了中文编码（936）和长文件名支持。

## 引脚映射 (`components/pinmap/pinmap.h`)

单一头文件，定义所有 GPIO 引脚分配：SPI 总线（LCD + SD）、I2C 传感器、触摸中断、IMU 中断、I2S 音频、电源键、电池充电状态。

## 提交规范

使用 [Conventional Commits](https://www.conventionalcommits.org/) 规范：`feat`、`fix`、`docs`、`style`、`refactor`、`test`、`chore`，可附带可选的 `(<scope>)`。
