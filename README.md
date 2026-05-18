
# FocusTimer

![Version](https://img.shields.io/badge/version-1.0.0-blue)
![ESP-IDF](https://img.shields.io/badge/ESP--IDF-v5.5.2-green)
![License](https://img.shields.io/badge/license-AGPL--3.0-purple)

> 一款基于ESP32-H2的番茄工作法专注时钟，配备2.9英寸全反屏，支持触控、音频提示、环境监测、翻转检测与蓝牙APP数据同步，低功耗设计实现超长续航。

## 简介

FocusTimer是一款结合了经典番茄工作法的专注时钟，采用乐鑫ESP32-H2低功耗蓝牙SoC作为主控，搭配2.9英寸全反射式显示屏，在提供清晰视觉体验的同时实现极低的功耗。

## 开发平台

### 硬件平台

| 组件 | 型号 | 说明 |
|------|------|------|
| 主控芯片 | ESP32-H2 | 低功耗蓝牙RISC-V SoC |
| 显示屏 | ST7305 2.9" | 全反射式LCD，SPI接口 |
| 触控传感器 | AW96103 | 电容式触控，I2C接口 |
| CO2传感器 | STCC4 | 高精度CO2传感器，附带SHT40，I2C接口 |
| 加速度计 | IMU | 六轴运动传感器，I2C接口 |
| 音频功放 | MAX98357 | I2S数字音频功放 |
| 电源管理 | AW32001 | 电池充电管理IC |
| 实时时钟 | PCF85263A | 超低功耗RTC，I2C接口 |
| 存储 | SD卡 | SPI接口，用于音频文件存储 |

### 软件平台

- **ESP-IDF**: v5.5.2
- **LVGL**: v9.4
- **FreeRTOS**: 实时操作系统
- **NimBLE**: 低功耗蓝牙协议栈

## 项目结构

```
focus_timer/
├── CMakeLists.txt          # 项目根CMake配置
├── VERSION                 # 版本号文件
├── partitions.csv          # Flash分区表
├── sdkconfig               # ESP-IDF配置文件
├── sdkconfig.defaults      # 默认配置
├── README.md               # 项目描述文件
├── LICENSE                 # 许可证
│
├── main/                   # 主应用程序
│   ├── CMakeLists.txt
│   ├── main.c              # 程序入口
│   └── idf_component.yml   # 组件依赖配置
│
├── components/             # 自定义组件
│   ├── aw32001/            # 电源管理驱动
│   ├── aw96103/            # 触控传感器驱动
│   ├── battery/            # 电池电量监测
│   ├── ble/                # 蓝牙服务
│   ├── imu/                # IMU加速度计驱动
│   ├── lvgl_indev/         # LVGL输入设备适配
│   ├── lvgl_user/          # LVGL用户界面逻辑
│   ├── max98357/           # 音频功放驱动
│   ├── nvs_storage/        # NVS非易失存储
│   ├── pcf85263a/          # RTC实时时钟驱动
│   ├── pinmap/             # 引脚定义
│   ├── power_management/   # 电源管理策略
│   ├── sdspi/              # SD卡SPI驱动
│   ├── sleep/              # 低功耗睡眠管理
│   ├── spi_shared_lock/    # SPI总线共享锁
│   ├── st7305_2p9/         # LCD显示驱动
│   ├── stcc4/              # 温湿度+CO2传感器驱动
│   ├── sys_init/           # 系统初始化
│   └── ui/                 # UI界面资源
│
├── assets/                 # 资源文件
│   └── *.wav               # 音频提示文件
│
├── tools/                  # 工具脚本
│   └── wav_to_partition_bin.py  # WAV转分区bin工具
│
├── docs/                   # 文档
│   └── audio_partition.md  # 音频分区使用说明
│
├── managed_components/     # ESP-IDF管理的组件
│   └── ...
│
└── build/                  # 编译输出目录
    └── ...
```

## 快速开始
### 烧录预编译固件

> ⚠️ **烧录前请注意**
> 请确保设备关闭低功耗模式和自动休眠，使用 USB-A to C 数据线连接 PC 与设备。

#### 第一次烧录

**01 下载工具和固件**

1. 下载并解压 [官方烧录工具](https://www.espressif.com/sites/default/files/tools/flash_download_tool_x.x.x.zip)
2. 在 [Releases 页面](https://github.com/vrxiaojie/FocusTimer/releases) 下载最新版 **带有 `full` 字样** 的固件

**02 选择芯片型号**

打开烧录工具，选择芯片型号 `ESP32-H2`

**03 配置固件路径和烧录地址**

1. 选择串口和波特率 `1152000`
2. 选择 `focustimer_full_{version}.bin` 文件
3. 地址设为 `0x0`
4. 在该行前面打勾
5. 点击 `START` 按钮开始烧录

**04 重启设备**

插拔一次 USB 数据线以重启设备，烧录完成。

#### 固件更新

目前固件更新仅支持 USB 升级。更新步骤与第一次烧录类似，主要区别如下：

**01 固件选择**

在 [Releases 页面](https://github.com/vrxiaojie/FocusTimer/releases) 下载 **不带 `full` 字样** 的固件。例如 `focustimer_{version}.bin`

**02 烧录地址**

配置烧录地址时，需要改为 `0x10000`

---

### 从源码编译烧录
#### 环境准备

1. **安装ESP-IDF**

   请参考[官方文档](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32h2/get-started/index.html)安装ESP-IDF v5.5.2。

   ```bash
   # 克隆ESP-IDF
   git clone -b v5.5.2 --recursive https://github.com/espressif/esp-idf.git
   cd esp-idf
   ./install.sh esp32h2
   source export.sh
   ```

2. **克隆项目**

   ```bash
   git clone https://github.com/vrxiaojie/FocusTimer.git
   cd FocusTimer
   ```

#### 编译项目

```bash
# 设置目标芯片
idf.py set-target esp32h2

# 编译项目
idf.py build
```

#### 下载固件

```bash
# 下载全部固件（bootloader、分区表、应用程序）
idf.py -p /dev/ttyUSB0 flash

# 仅下载应用程序
idf.py -p /dev/ttyUSB0 app-flash
```

#### 自定义提示音（可选）
注意：在Releases页面下载的`full`固件中自带提示音。

音频文件需要单独烧录到`audio`分区：

```bash
# 1. 准备WAV文件（PCM、16-bit、22050Hz、单声道）
# 2. 转换为分区bin文件
python3 tools/wav_to_partition_bin.py --input assets/timeout.wav --output assets/timeout.bin

# 3. 烧录到audio分区
parttool.py --port /dev/ttyUSB0 write_partition --partition-name audio --input assets/timeout.bin
```

详细说明请参考[音频分区使用说明](docs/audio_partition.md)。

## 协议

本项目采用 [GNU Affero General Public License v3.0](LICENSE) 开源协议。

### 商业使用
未经作者许可，禁止商用。

## 如何贡献
欢迎您的贡献！请遵循以下步骤：

### 贡献流程

1. **Fork 项目**

2. **克隆你的Fork**
   ```bash
   git clone https://github.com/your-username/FocusTimer.git
   cd FocusTimer
   git remote add upstream https://github.com/vrxiaojie/FocusTimer.git
   ```

3. **创建功能分支**
   ```bash
   git checkout -b feature/your-feature-name
   ```

4. **提交更改**
   ```bash
   git add .
   git commit -m "feat: 添加你的功能描述"
   ```

5. **推送并创建PR**
   ```bash
   git push origin feature/your-feature-name
   # 在GitHub上创建Pull Request
   ```

### 代码规范

- 遵循ESP-IDF编码风格
- 使用有意义的变量和函数名
- 添加必要的注释
- 确保代码通过编译测试

### 提交规范

使用[Conventional Commits](https://www.conventionalcommits.org/)规范：

```
<type>(<scope>): <subject>

<body>

<footer>
```

类型（type）：
- `feat`: 新功能
- `fix`: 修复bug
- `docs`: 文档更新
- `style`: 代码格式调整
- `refactor`: 代码重构
- `test`: 测试相关
- `chore`: 构建/工具相关

### 问题反馈

- 使用[GitHub Issues](https://github.com/vrxiaojie/FocusTimer/issues)报告bug
- 提供详细的复现步骤和环境信息
- 包含相关的日志输出

## 其他

### 硬件设计

硬件设计文件（原理图、PCB）在立创开源广场[FocusTimer低功耗专注时钟](https://oshwhub.com/vrxiaojie/project_ziomcvky)。欢迎点赞收藏！

### 手机APP

配套手机APP见[focustimer_app](https://github.com/vrxiaojie/focustimer_app)

**⭐ 如果这个项目对你有帮助，请给一个Star！非常感谢！**