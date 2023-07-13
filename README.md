# ExplorerPatcher Chinese Localization 中文汉化版
该项目旨在为 Windows 11 恢复高效的工作环境。

这是简体中文的修改版。由 zetaloop 制作分享，遵循原作 GPL-2.0 协议。

[Original English version 英文原版链接](https://github.com/valinet/ExplorerPatcher) | 原作者 PayPal 捐赠：[PayPal](https://www.paypal.com/donate?business=valentingabrielradu%40gmail.com&no_recurring=0&item_name=ExplorerPatcher&currency_code=EUR) 或通过邮箱地址 valentingabrielradu@gmail.com

![编译状况](https://github.com/zetaloop/ExplorerPatcher/actions/workflows/build.yml/badge.svg)

## 功能介绍

* 自由切换 Win10 和 Win11 任务栏，支持设置标签合并、功能显示等。
* 恢复 Win10 右键菜单和文件管理器命令栏。
* 切换开始菜单版本、禁用推荐、自动打开所有应用页面。
* 自定义应用切换器，可选 Win11、Win10、Win NT 等风格。
* 以及更多自定义设置。

## 开始使用

1. 下载最新安装包：[GitHub](https://github.com/zetaloop/ExplorerPatcher/releases/latest/download/ep_setup.exe) | [GHProxy](https://ghproxy.com/https://github.com/zetaloop/ExplorerPatcher/releases/latest/download/ep_setup.exe)
2. 运行安装包，允许管理员权限，自动开始安装。（暂时退出文件管理器、桌面，请等待 1~2 分钟）
3. 安装完成后，迎接你的将是熟悉的 Win10 任务栏。右键任务栏打开“属性”就是本软件的设置界面，可自行配置。
4. 下载安装 [补充汉化v2.1.zip](https://github.com/zetaloop/ExplorerPatcher/files/12035396/v2.1.zip) 补丁，修复 Win10 开始菜单中文翻译缺失的问题。

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
* 软件遇到问题？向作者汇报：[问题汇报指南（英文）](https://github.com/valinet/ExplorerPatcher/wiki/Reporting-problems)
* 翻译需要改进？直接告诉我：[创建议题](https://github.com/zetaloop/ExplorerPatcher/issues) | [邮箱联系](mailto:zetaloop@outlook.com)
* 有能力者请阅读[软件源代码](https://github.com/valinet/ExplorerPatcher/tree/master)并尝试做出改进。开发者愿意合并问题修复和功能增强，这可以为软件进一步完善做出贡献。
- 另一个 ExplorerPatcher 汉化版，值得一看：[Yukari316/ExplorerPatcher_zh-CN](https://github.com/Yukari316/ExplorerPatcher_zh-CN)（我们从它学来了通知消息等的修改！谢谢！）

## 卸载

有以下几种卸载方法：
* 在系统设置、控制面板里卸载。
* 运行安装包命令 `ep_setup.exe /uninstall` 卸载。
* 把安装包 `ep_setup.exe` 重命名为 `ep_uninstall.exe` 然后运行来卸载。
* 直接删除 `C:\Windows\dxgi.dll` 文件。

## 更新

* 自带更新：打开软件设置内的更新页面，即可检查和安装版本更新。
* 下载最新版安装包，直接安装即可更新。
* 汉化版更新网址默认为汉化版，跟进原版更新。

## 更多信息（英文）

* [原理](https://github.com/valinet/ExplorerPatcher/wiki/How-does-it-work)
* [杀毒软件误报](https://github.com/valinet/ExplorerPatcher/wiki/Antivirus-false-positives)
* [编译](https://github.com/valinet/ExplorerPatcher/wiki/Compiling)

## 项目收藏人数

[![Stargazers over time](https://starchart.cc/zetaloop/ExplorerPatcher.svg)](https://starchart.cc/zetaloop/ExplorerPatcher)
