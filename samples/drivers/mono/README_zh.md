# MONO

## 概述

Mono示例工程展示了单调计数器的功能。在这个工程中，通过向mono寄存器写入1，从而实现该寄存器的累加。
本例程一共读取10次counter值，如果这十个值是依次递增且每次加1，则打印 pass，否则 fail。

## 硬件设置

无特殊设置

## 运行现象

当工程正确运行后，串口终端会输出如下信息：
mono test start!
mono test pass!
mono test end!
