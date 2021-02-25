# 2.22 第一课

## 操作系统概述

1. 预备知识 - RISC-V

2. 课程信息

   1. 课程 WIKI
   2. 云实验环境
      1. 阿里云 uCore os 实验环境
      2. 实验楼 rCore os 实验环境
      3. 实验楼 uCore os 实验环境
      4. rcore tutorial云实验环境：ssh -l rcore 166.111.131.12

3. 参考教材

   <img src="C:\Users\ligeo\Desktop\Y3S2\操作系统\week1.assets\image-20210222100700252.png" alt="image-20210222100700252" style="zoom: 50%;" />

4. 教学内容 - 操作系统结构，中端及系统调用，内存管理，进程管理，处理机调度，同步互斥，文件系统，I/O 子系统
5. 基础实验
   0. 操作系统实验准备
   1. hello-world OS
   2. ... 

6.  课程设计
7. 成绩评定 - 实验30，其中30，期末40
8. 调查问卷 http://oscourse2019.mikecrm.com/2Z5XRdC VYjsx47

## 什么是操作系统

> os is a hardware management resource, control program execution, 改善 human-computer interface and ... 

<img src="C:\Users\ligeo\Desktop\Y3S2\操作系统\week1.assets\image-20210222103239738.png" alt="image-20210222103239738" style="zoom:67%;" />

### 操作系统解释

1. 控制程序 - 系统软件
2. 资源管理程序 - 

### 操作系统软件人类

Shell, GUI, Kernel

### 操作系统内核的抽象与特征 

- 并发，共享，虚拟，异步

## 操作系统历史演变

1. 单用户系统 - 操作系统 - 装载器 + 程序库
2. 批处理系统 - 操作系统 - 装载器 + 程序控制器 + 输出处理器
3. 多大程序系统 - 装载器 + 程序调查 + 内存管理 + 输出管理
4. 分时系统
5. 个人电脑
6. 分布式系统 
7. AIoT 系统
8. Fuchsia

## 操作系统结构

简单结构，单体分层结构，微内核结构， 外核结构 exokernel， 虚拟机结构 VMM

虚拟器 vs 模拟器 

![image-20210222111553835](C:\Users\ligeo\Desktop\Y3S2\操作系统\week1.assets\image-20210222111553835.png)

## OS 实验概述

实验1：hello-world OS

实验2：kernel-mode OS

实验3：multi-programming OS

实验4：mem-isolation OS

实验5： multi-process OS

实验6： inter-process-comm OS

实验7：file-system OS

实验8：r/u core os

# 2.25 第2讲课，中断，异常与系统调用

seperate 系统调用 from 应用程序，create 系统操作 that can use 硬件接口 and allow for 应用 to be built upon

## 从OS角度看计算机系统

OS relationship with 体系结构

OS relationship with 应用程序

focus on OS/VM, level between programming language and ISA

kernel - process, memory, device, file system, ...

operations

- 进程管理
- 文件管理

什么是隔离？独立应用程序

如何隔离？ 

- 地址空间 each 程序 has its own memory, 
- CPU 硬件中的特权模式
- 虚拟内存，逻辑地址 vs 物理地址 connection, the connections can not be accessed

CPU 硬件支持不同的特权模式

- kernel mode vs user mode : kernel mode can execute 特权操作 that user mode can not

中断机制 interrupt request, 中断是CPU 对系统发生的某个事件作出的一种反应,

- 中断处理程序 interrupt handle
- timer can 稳定定时地产生终端， 防止应用程序死占着CPU不放,让OS Kernel能得到执行权

## 从OS角度再理解RISC-V

### 主流CPU指令集

riscv compared to intel and arm: easier to learn, simplier,

### RISC-V 系统模式

- M 模式

- 控制状态寄存器 CSR

### RISC-V 系统编程：M 模式

- 8 控制状态寄存器

### RISC-V 系统编程： S 模式

- 权限 higher than U, lower than M
- cannot use M modes CSR and commands

## kernel mode 操作系统

### 用户态引用程序

控制逻辑，地址空间，系统调用

### kernel-mode OS 

启动，初始化，创建执行应用，系统调用服务



