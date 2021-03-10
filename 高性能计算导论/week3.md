# 3.9 第3讲

# 消息传递编程模型-1

MPI 的历史

什么是MPI？ Message Passing Interface

MPI开发人员 -> MPI Interface -> MPI 程序员

设计目标

- 可移植性
- 可扩展性
- 灵活性

how to use MPI library?

网路相关的材料?

如何写一个

### SPMD 编程风格

simple program multiple data

simd 从指令级上看的，一诶常见用的体系构

## MPI 编程基础

#include "mpi.h"

在并行程序开始有两个重要问题

- 有多少个进程参与此计算
- 我是哪一个进程

MPI answers these two questions

通信域和组 communicator and group

- 组：定义了那些进程之间可以相互通信

任务ID

```
MPI_Init()
MPI_Finalize()
MPI_Comm_size(comm, &size)
MPI_Comm_rank(comm, &rank)
```

hello_world.c

```
#include "mpi.h"
#include <iostream>
int main(int argc, char *argv[])
...
```

optimized better for c than c++

## 点对点通信

消息传递模型中的通信类型

- 阻塞式通信 - 命令发出通信完成后才返回
- 非阻塞式通信 - 命令发出后，无需要通信完成，立即返回

阻塞:

```
MPI_Send(buffer, count, type, dest, tag, comm)
MPI_Recv(buffer, count, type, source, tag, comm, status)
```

- MPI_Send: dest 是 comm 指定的通信域中目标进程的rank

非阻塞:

```
MPI_Isendbuffer, count, type, dest, tag, comm)
MPI_Irecv(buffer, count, type, source, tag, comm, status)
```

```
MPI_Wait(request, status)
MPI_Waitall(count, array_of_request, array_of_statusses)
```

send can match with rec

MPI数据类型：MPI_datatype

## MPI并行编程示例

The Trapezoidal Rule 

初始问题 -》 任务划分 -》 并行计算 -》结果综合

### 集合通信 Collective

更高级的方法一表示多个进程间的通信

由通信域中 的所有进程共同调用，每个进程执行相同的通信操作

Bcast/Reduce during 多数直算法中， simplier and more efficient

```
MPI_Bcast(&buffer, count, datatype, root, comm)
MPI_Reduce(&sendbuf, &recbuf, count, datatype, op, dest,comm)
MPI_Scatter()
MPI_Gather()
MPI_Allgather()
MPI_Barrier()
```

1. 广播：从rank为root的进程broadcast到所有进程
2. 归约: 所有进程执行归约操作结果汇总在一个进程中
3. 分散：
4. 收集：
5. Allgather = 收集 + 广播
6. Allreduce= 归约 + 广播
7. Alltoall = n次收集
8. Barrier

### MPI通信域和组合管理

### POSIX 文件系统调用

can open file in parallel, but cannot write to it 

MPI-IO

- independent i/o
- collective i/o

## MPI 编译与运行



















