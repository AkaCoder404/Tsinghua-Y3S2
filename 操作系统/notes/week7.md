# 4.1 第12 讲

# 4.8 第13讲

同步互斥 synchronization mutex

mutex? multiple threads, one "mutex", thread that has the "mutex" can do the work, moderator is the operating system, when thread is done with work, hand "mutex" back to moderator who will pass the "mutex" to the next thread.

fork? operating whereby a process creates a copy of itself. 

- creates seperate address space for child
- child has exact copy of all memory segments of parent process
- virtual memory pages in both process may refer to the same pages of physical memory until one of them writes to such a page, then it is copied

atomic operation? 原子操作 , operation that will always be executed without any other process being able to read or change state that is read or changed during the operation. 

- single processor core systems using single CPU instruction (and disabling interruptions if multiple CPU instructions are required) 

- multiprocessor/multicore:  use a lock on the bus (communication link used in computer systems to send data, addresses, control signals, and power to various components in a computer system)

互斥，思索，饥饿 : mutual exclusion/deadlock/starvation

- starvation caused by errors in scheduling or mutual exclusion algorithm, where a process is perpetually denied necessary resources to process its work. 

### 临界区 critical section

- critical section - protected section that cannot be executed by more than one process at a time (shared resources that are continuously accessed, causing unexpected or erroneous behavior)

```
entry section
	critical section
exit section
	remainder section
```

- 空困则入
- 忙则等待
- 有限等待
- 让权等待（可选）





### progress vs bounded waiting?

**1) Progress** is : If no process is executing in its critical section and some processes wish to enter their critical sections, then only those processes that are not executing in their remainder section can participate in deciding which will enter its critical section next, and this selection cannot be postponed indefinitely.

**2) Bounded waiting is** : There exists a bound, or limit, on the number of times other processes are allowed to enter their critical sections after a process has made request to enter its critical section and before that request is granted.

### 3 different methods





Peterson's 算法 - concurrent program algorithm for mutual exclusion that allows two or more processes to share a single-use resource without conflict (using only shared memory for communication)

Dekker's 算法 - 



Eisenberg 和 McGuire

方法3：跟高级的抽象方法

- lock