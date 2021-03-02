# 3.3 第2讲

lab0 explanation

什么是并行计算？

## 并行计算硬件模型

flynn 分类方法 - 指令流与数据流

- SISD
- SIMD
- MISD
- MIMD

## 内存架构分类

shared memory vs distributed memory (共享内存 vs 分配内存)

- symmetric multiprocessor smp, 包括两个或多个相同（同构）处理器，每一个处理器可以处理不同的任务
- 均匀内存访问架构 unified memory access UMA
- 非均匀内存访问架构 non-unified memory access NUMA
- 单芯片多处理器 chip multi processor CMP

分布式内存 

- 每一个单处理器有自己的内存，不同内存的地质空间独立，一个处理器单元不可通过地质直接访问其他处理器单元的内存
- 集群服务器 cluster

## 并行编程模型

进程vs线程 (process vs thread)

串行程序vs并行程序

```
pthread
OpenMp
MPI
```

消息传递模型的实现-MPI， mesage passing interface 

MPI类型

- 阻塞
- 非阻塞

## 数据并行模型

在不同数据上并发执行

MapReduce 



## 混合多种并行编程模型



## 并行计算性能

加速比

线性加速

超线性加速

亚线性加速

Amdahl's law, 描述理想情况下，程序的加速比与可并行部分的关系

- the speed of process depends on segment that can be be split into parallel processing 

强扩展 strong scaling

弱扩展 weak scaling

