# ExplorerPatcher 汉化版
该项目旨在为 Windows 11 恢复高效的工作环境。

这是简体中文的修改版。由 [Zetaspace](https://github.com/ZetaSp) 制作并分享，遵循原作 GPL-2.0 协议。

[英文原版链接](https://github.com/valinet/ExplorerPatcher) | 原作者 PayPal 捐赠：[PayPal](https://www.paypal.com/donate?business=valentingabrielradu%40gmail.com&no_recurring=0&item_name=ExplorerPatcher&currency_code=EUR) 或通过邮箱地址 valentingabrielradu@gmail.com

![Build status](https://github.com/ZetaSp/ExplorerPatcher/actions/workflows/build.yml/badge.svg)

## 功能介绍

* 自由切换 Win10 和 Win11 款式的任务栏，调整功能是否显示、标签是否合并。
* 恢复 Win10 右键菜单和文件管理器命令栏。
* 选择开始菜单样式、禁用推荐的项目、自动打开所有应用页面。
* 自定义应用切换器，是 Win11、Win10，也可以是 Win NT。
* 还有更多自定义设置！
* [阅读百科（英文）](https://github.com/valinet/ExplorerPatcher/wiki/All-features)以了解程序提供的所有功能。

部分功能在 Win10 上不可用。

## 开始使用

1. 下载最新安装包：[GitHub](https://github.com/ZetaSp/ExplorerPatcher/releases/latest/download/ep_setup.exe) | [GHProxy](https://ghproxy.com/https://github.com/ZetaSp/ExplorerPatcher/releases/latest/download/ep_setup.exe)
2. 运行安装包，允许管理员权限，自动开始安装。（暂时退出文件管理器、桌面，请等待2分钟左右）
3. 安装完成后，迎接你的将是熟悉的 Win10 任务栏。如需进行个性化配置，右键任务栏打开“属性”即可设置。

完成了，仅此而已。

#### 安装遇到问题

安装过程中，如果桌面一直没有恢复，按快捷键 Ctrl + Shift + Esc 打开任务管理器，运行新任务 `explorer` 即可恢复桌面。

如果找不到“属性”设置界面，新建一个快捷方式，地址为 `rundll32 "C:\WINDOWS\dxgi.dll",ZZGUI`，然后双击快捷方式即可打开界面。快捷方式可以拖到任务栏固定，或者固定到开始菜单。

如果遇到 win10 开始菜单汉化不全的问题，可以安装 [补充汉化.zip](https://github.com/ZetaSp/ExplorerPatcher/files/9639911/ExplorerPatcher.zip)，感谢 [@meiruitesi](https://github.com/meiruitesi)，详见 [Issue 6](https://github.com/ZetaSp/ExplorerPatcher/issues/6#issuecomment-1236125461)。

## 进阶指南

* 这是[软件百科（英文）](https://github.com/valinet/ExplorerPatcher/wiki)。这里有本软件的高级用法、更多操作方式和特性的相关信息。
  * [百科：更多特性](https://github.com/valinet/ExplorerPatcher/wiki/All-features)
  * [百科：配置更新](https://github.com/valinet/ExplorerPatcher/wiki/Configure-updates)
  * [百科：常见问题](https://github.com/valinet/ExplorerPatcher/wiki/Frequently-asked-questions)
* 有其他疑问吗？询问讨论区：[英文版](https://github.com/valinet/ExplorerPatcher/discussions) | [中文版](https://github.com/ZetaSp/ExplorerPatcher/discussions)
* 软件遇到问题？阅读指南并详细汇报给作者：[问题汇报指南（英文）](https://github.com/valinet/ExplorerPatcher/wiki/Reporting-problems)
* 翻译需要改进？请告诉我：[创建议题](https://github.com/ZetaSp/ExplorerPatcher/discussions) | [邮箱联系](mailto:zetaspace@outlook.com)
* 推荐阅读[软件源代码](https://github.com/valinet/ExplorerPatcher/tree/master)并尝试改进它。开发者很愿意接受增强功能与问题修复，这为软件进一步完善做出了很大贡献。

## 已知问题

功能限制：参阅 [英文版议题](https://github.com/valinet/ExplorerPatcher/issues)。

汉化：由于编码问题，暂未汉化通知消息。

## 卸载

* 系统设置或控制面板里卸载。
* 运行安装包命令 `ep_setup.exe /uninstall` 卸载。
* 安装包 `ep_setup.exe` 重命名为 `ep_uninstall.exe` 然后运行即可卸载。

## 更新

* 自带更新：打开软件设置（属性）的更新页面，即可检查和安装版本更新。
* 下载最新版安装包，直接安装即可更新。
* 汉化版更新网址默认为汉化版，每周跟进原版更新。

## 更多信息（英文）

* [原理](https://github.com/valinet/ExplorerPatcher/wiki/How-does-it-work)
* [杀毒软件误报](https://github.com/valinet/ExplorerPatcher/wiki/Antivirus-false-positives)
* [编译](https://github.com/valinet/ExplorerPatcher/wiki/Compiling)
