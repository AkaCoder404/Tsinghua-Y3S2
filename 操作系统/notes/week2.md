# 3.1 第3讲

## 进程概念

operating system puts executable file into process space to be executed

characteristics - dynamic, 并发性，independent, 制约性

进程 = 执行中的程序 = 程序 + 执行状态， 动态的，（程序静态）

### 进程控制块

PCB， process control block - 进程创建，停止，管理

包含什么？通信信息，管理信息，资源，调度，状态，数据结构连接

### 进程状态

https://www.javatpoint.com/os-process-states

创建，执行，等待，抢占，唤醒 ，结束

程序执行 ： 创建 - 就绪 - 运行 - 等待 - 退出

进程状态

### 三状态进程模型

运行状态，就绪状态，等待状态

## 进程调用

### 处理机调度概念

进程切换 safe current process files (cpu state), save in 汇编

处理机 choose something from 就绪 for the CPU to process next

调用时机 

### 先来先服务调用算法

first come first serve 

优点 - simple, 缺点 - 平均等待时间比较大

### 时间片轮转调用算法

round robin

时间片 - 分配处理机资源的基本时间单元

## 进程切换与管理

### 进程切换

stop current process, save state, switch, continue with other is done

### 创建新进程

unix - fork/exec

https://www.geeksforgeeks.org/difference-fork-exec/

进程结束执行时调用exit(), 完成进程资源回收

https://www.tutorialspoint.com/unix_commands/exit.htm

## 同步互斥与进程间通信

并法进程 - 在多个进程间有资源共享

- 进程需要与计算机中的其他进程和设备进行协办
- 共享资源
- 加速

原子操作 atomic operation

> an operation during which a processor can simultaneously read a location and write it in the same bus operation. this prevents any other processor or I/O device from writing or reading memory until the operation is complete, implies indivisibility and irreducibility, atomic operation must be performed entirely or not performed at all

### 临界区

critical section - code segment where a shared resource can be accessed

```
entry section
	critical section
exit section
	remainder section
```

空闲则入，忙则等待，有限等待，让权等待（可选）

### 禁用硬件中断

no interrupt, no switch, so theres no 并法, this makes it so that only a single process can be executed

缺点 - program can't stop until its finished because no interrupt handler, unknown wait time

### 进程通信

interprocess communication

- send (message)
- receive (message)

间接通信

阻塞 - wait until send and receive is totally complete

非阻塞 - just send and receive, result of send of receive doesn't matter

暖冲方法  

管道 pipe 

## 实验三-分时多人物系统

user mode can't 切换, only kernel can

