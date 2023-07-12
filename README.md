# ExplorerPatcher Chinese Localization 中文汉化版
该项目旨在为 Windows 11 恢复高效的工作环境。

这是简体中文的修改版。由 zetaloop 制作分享，遵循原作 GPL-2.0 协议。

[Original English version 英文原版链接](https://github.com/valinet/ExplorerPatcher) | 原作者 PayPal 捐赠：[PayPal](https://www.paypal.com/donate?business=valentingabrielradu%40gmail.com&no_recurring=0&item_name=ExplorerPatcher&currency_code=EUR) 或通过邮箱地址 valentingabrielradu@gmail.com

![编译状况](https://github.com/zetaloop/ExplorerPatcher/actions/workflows/build.yml/badge.svg)

## 功能介绍

* 自由切换 Win10 和 Win11 款式的任务栏，调整功能是否显示、标签是否合并。
* 恢复 Win10 右键菜单和文件管理器命令栏。
* 选择开始菜单样式、禁用推荐的项目、自动打开所有应用页面。
* 自定义应用切换器，是 Win11、Win10，也可以是 Win NT。
* 还有更多自定义设置！
* [阅读百科（英文）](https://github.com/valinet/ExplorerPatcher/wiki/All-features)以了解程序提供的所有功能。

部分功能在 Win10 上不可用。

## 开始使用

1. 下载最新安装包：[GitHub](https://github.com/zetaloop/ExplorerPatcher/releases/latest/download/ep_setup.exe) | [GHProxy](https://ghproxy.com/https://github.com/zetaloop/ExplorerPatcher/releases/latest/download/ep_setup.exe)
2. 运行安装包，允许管理员权限，自动开始安装。（暂时退出文件管理器、桌面，请等待 1~2 分钟）
3. 安装完成后，迎接你的将是熟悉的 Win10 任务栏。如需进行个性化配置，右键任务栏打开“属性”就是本软件的设置界面。
4. 下载安装 [补充汉化v2.0.zip](https://github.com/zetaloop/ExplorerPatcher/files/12028650/v2.0.zip) 补丁，修复 Win10 开始菜单中文翻译缺失的问题。

完成了！干得漂亮。

#### 安装遇到问题

安装不应该持续很长时间。如果桌面一直没有恢复，按快捷键 Ctrl + Shift + Esc 打开任务管理器，运行新任务 `explorer` 即可恢复桌面。

如果找不到“属性”（本软件的设置界面），新建一个快捷方式，填写地址为 `rundll32 "C:\WINDOWS\dxgi.dll",ZZGUI`，然后双击快捷方式即可打开界面。可以把该快捷方式拖到任务栏固定，或者固定到开始菜单。

Win10 开始菜单汉化不全问题及补丁，详见 [这个议题](https://github.com/zetaloop/ExplorerPatcher/issues/6#issuecomment-1236125461)，感谢 [@meiruitesi](https://github.com/meiruitesi) 和 [10SM 项目](https://github.com/bbmaster123/10SM) 的帮助。

## 进阶指南

* 这是[软件百科（英文）](https://github.com/valinet/ExplorerPatcher/wiki)。这里有本软件的高级用法、更多操作方式和特性的相关信息。
  * [百科：更多特性](https://github.com/valinet/ExplorerPatcher/wiki/All-features)
  * [百科：配置更新](https://github.com/valinet/ExplorerPatcher/wiki/Configure-updates)
  * [百科：常见问题](https://github.com/valinet/ExplorerPatcher/wiki/Frequently-asked-questions)
* 有其他疑问吗？询问讨论区：[英文版](https://github.com/valinet/ExplorerPatcher/discussions) | [中文版](https://github.com/zetaloop/ExplorerPatcher/discussions)
* 软件遇到问题？阅读指南并详细汇报给作者：[原作者邮箱](mailto://valentingabrielradu@gmail.com) | [问题汇报指南（英文）](https://github.com/valinet/ExplorerPatcher/wiki/Reporting-problems)
* 翻译需要改进？请告诉我：[创建议题](https://github.com/zetaloop/ExplorerPatcher/discussions) | [邮箱联系](mailto:zetaloop@outlook.com)
* 推荐阅读[软件源代码](https://github.com/valinet/ExplorerPatcher/tree/master)并尝试改进它。开发者很愿意接受增强功能与问题修复，这为软件进一步完善做出了很大贡献。

_软件 bug 请反馈[原作者](mailto://valentingabrielradu@gmail.com)，翻译问题欢迎探讨~_

## 已知问题

功能限制：参阅 [英文版议题](https://github.com/valinet/ExplorerPatcher/issues)。

某些版本有可能导致文件管理器崩溃，表现为开机黑屏不打开桌面，此时通过任务管理器打开命令提示符 CMD，删除 C:\WINDOWS\dxgi.dll 即可恢复。（这问题之前困扰我好久）目前新版本无此问题，我备用机那是好久忘记更新了。

汉化：由于编码问题，暂未汉化通知消息。

## 卸载

几种方法可供选择：* 系统设置或控制面板里卸载。
* 运行安装包命令 `ep_setup.exe /uninstall` 卸载。
* 安装包 `ep_setup.exe` 重命名为 `ep_uninstall.exe` 然后运行即可卸载。
* 删除 `C:\WINDOWS\dxgi.dll` 文件即可卸载。

## 更新

* 自带更新：打开软件设置（属性）的更新页面，即可检查和安装版本更新。
* 下载最新版安装包，直接安装即可更新。
* 汉化版更新网址默认为汉化版，每两周跟进原版更新。

## 更多信息（英文）

* [原理](https://github.com/valinet/ExplorerPatcher/wiki/How-does-it-work)
* [杀毒软件误报](https://github.com/valinet/ExplorerPatcher/wiki/Antivirus-false-positives)
* [编译](https://github.com/valinet/ExplorerPatcher/wiki/Compiling)

## 项目收藏人数

[![Stargazers over time](https://starchart.cc/zetaloop/ExplorerPatcher.svg)](https://starchart.cc/zetaloop/ExplorerPatcher)
