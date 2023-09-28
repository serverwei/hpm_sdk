# QEIV2 UVW Encoder

## 概述

**Qeiv2 UVW Encoder**工程主要演示配置UVW编码器并获取其数据，然后通过串口终端将数据打印出来。

## 配置

- 将UVW编码器的UVW信号与开发板上的QEI_A、QEI_B、QEI_Z信号相连接。
- 让编码器快速转动。

## 运行现象

- 上电后，打开串口终端，打印信息如下：

```console

----------------------------------------------------------------------
$$\   $$\ $$$$$$$\  $$\      $$\ $$\
$$ |  $$ |$$  __$$\ $$$\    $$$ |\__|
$$ |  $$ |$$ |  $$ |$$$$\  $$$$ |$$\  $$$$$$$\  $$$$$$\   $$$$$$\
$$$$$$$$ |$$$$$$$  |$$\$$\$$ $$ |$$ |$$  _____|$$  __$$\ $$  __$$\
$$  __$$ |$$  ____/ $$ \$$$  $$ |$$ |$$ /      $$ |  \__|$$ /  $$ |
$$ |  $$ |$$ |      $$ |\$  /$$ |$$ |$$ |      $$ |      $$ |  $$ |
$$ |  $$ |$$ |      $$ | \_/ $$ |$$ |\$$$$$$$\ $$ |      \$$$$$$  |
\__|  \__|\__|      \__|     \__|\__| \_______|\__|       \______/
----------------------------------------------------------------------
qeiv2 uvw encoder example
pos:0x95555555
pos:0x15555555
pos:0x15555555
pos:0x6aaaaaaa
pos:0x95555555
pos:0xeaaaaaaa
pos:0x15555555
pos:0x6aaaaaaa
pos:0x95555555
pos:0xeaaaaaaa
pos:0x15555555
pos:0x6aaaaaaa
pos:0x95555555
pos:0x95555555
pos:0x15555555
pos:0x15555555
pos:0x95555555
pos:0x95555555
pos:0xeaaaaaaa
pos:0x15555555
pos:0x6aaaaaaa
pos:0x95555555
pos:0xeaaaaaaa
pos:0x15555555
pos:0x6aaaaaaa
pos:0x95555555
pos:0xeaaaaaaa


```