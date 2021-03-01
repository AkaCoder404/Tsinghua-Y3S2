# All Notes

[TOC]

# chapter 1

operating system: an additional abstraction layer between applications and hardware resources

if there is no operating system, the application can directly interact with the hardware.

a shell is software that provides an interface for an operating systems users to provide access to the kernel's services

# chapter 2

## 中断，异常与系统调用

隔离 isolation: OS serves all applications, this prevents the failure of one application to crash the operating system or other programs

中断 interrupts: provided primarily as a way to improve processor utilization, often used when processing I/O hardware devices

timer allows for OS to perform certain functions on a regular basis

processor suspends execution of the current program and execute a interrupt handler, typical part of OS

## 从OS角度看计算机系统

kernel mode vs user mode

## RISCV 系统模式

Modes, with hiearchy 

- user mode, supervisor mode, hypervisor mode, machine mode

控制状态寄存器 CSR, control status register

M mode: is the highest authority mode of hart (hardware thread) in  RISC-V. In M mode, hart has full access to the underlying functions of  memory, I/O, startup and configuration. The most important feature of the M mode is to intercept and handle exceptions. Synchronous exceptions:  generated during execution, accessed invalid register addresses, or  executed invalid opcode instructions. Asynchronous exceptions:  instruction flow asynchronous external events, interrupts, such as clock interrupts required by RISC-V Realize precise exceptions: ensure that  all instructions before the exception are executed completely, and  subsequent instructions have not started execution

U mode: applications can not directly use hardware resources, utilize OS to do so, lowest privileges,

S mode, adds virtual memory page mapping, supports multiple u mode process w/ separate address spaces, has exception handeling. 

## kernel mode 操作系统

u mode - 

1. 应用程序
2. 应用程序内存布局
3. 应用程序系统调用，调用实现

内核

1. 启动
2. 初始化
3. 系统调用的入口
4. 系统调用处理器框架 - traphandler 

# Sources

隔离性 https://zhuanlan.zhihu.com/p/266493713

模式 

- https://docs.microsoft.com/en-us/windows-hardware/drivers/gettingstarted/user-mode-and-kernel-mode#:~:text=A%20processor%20in%20a%20computer%20running%20Windows%20has,mode,%20some%20drivers%20may%20run%20in%20user%20mode.
- https://riscv.org/wp-content/uploads/2018/05/riscv-privileged-BCN.v7-2.pdf
- https://www-inst.eecs.berkeley.edu//~cs152/sp12/handouts/riscv-supervisor.pdf

