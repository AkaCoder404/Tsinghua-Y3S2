# 3.18 第4讲

Memory Hiearchy: Cache 1

different layers of cache, L1, L2, L3, arranged in clusters, which have different CPU's 

LLC - last layer cache

## Review

Memory System: buffer, prefetch, memory hierarchy

what is cache? place for concealment and safekeeping, often represented by $

## Memory Hierarchy

#### blocks vs pages?

> Not to be confused with Page (computer memory). In computing (specifically data transmission and data storage ), a block, sometimes called a physical record, is a sequence of bytes or bits, usually containing some whole number of records, having a maximum length, a block size. 

blocks contain a number of pages

different devices might support different block sizes, while pages are fixed in size, pages are less demanding when handling numerous storage devices

#### development of processor speeds/performance

clock speed (not increasing anymore), multiple cores, more transistors

better architectures : more parallelism in one thread, better branch prediction, better cache policies, better memory organizations, more thread-level parallelism

performance limited by latency (time for single access) and bandwidth (number of access per unit time)

#### DRAM vs SRAM vs IRAM

sram is on-chip memory whose access time is small, while dram is off-chip memory which has large access time, dram aka "main memory"

Intelligent RAM (IRAM) merges processing and memory into a single chip to lower memory latency, increase memory bandwidth, and improve energy efficiency as well as to allow more flexible selection of memory size and organization, less pins needed, Introduced because

1. the gap between processor and DRAM speed is growing at 50% per year; and
2. the size and organization of memory on a single DRAM chip is becoming awkward to use in a system, yet size is growing at 60% per year



## Memory Cache

aka RAM cache, portion of memory made of high-speed static RAM instead of DRAM. effective because most programs access the same data or instructions over and over. 

> L1 cache is a cache memory that is directly built into the processor and is used to store the CPU’s recently accessed information. In contrast, L2 cache is a cache memory that is located outside and separated from the CPU chip core, although it is found on the same CPU chip package. Meanwhile, L3 cache is a cache memory that is used by the CPU and is usually built onto the motherboard within the CPU module itself. 

what is a cache miss? state where data requested for processing by a component or application is not found in the cache memory, which causes execution delays. cache hit, on the other hand, occurs when the requested data is located in cache storage

#### Cache Entry Structure

![image-20210318114800409](C:\Users\ligeo\Desktop\Y3S2\计算机系统结构\week4.assets\image-20210318114800409.png)

## Cache Performance/Process

AMAT (average memory access time) = HitTime + MissRate * MissPenalty

- hit time : time to find and retrieve data
- miss penalty: average time to retrieve data on a current level miss, (includes the possibility of misses on successive levels of memory hierarchy)
- hit rate: % of request that are found in current level of cache

#### Littles Law

purpose of cache is to improve both latency and throughput (operation processing rates)

#### Locality

Rule of Thumb: programs send 90% of their execution time in only 10% of code

Principle of Locality:

1. temporal locality: recently accessed items are likely to be accessed in the near future (keep them close to the processor)
2. spatial locality: items whose address are near one another tend to be referenced close together
3. data locality: 

#### Placement Policy

memory - cache placement

Fully Associative, Set Associative, Direct Mapped

#### Write Policy

https://www.baeldung.com/cs/cache-write-policy

write through, write around, write back

what is write miss?

#### Performance

memory stall cycles - depends on number of misses and the cost per miss (aka miss penalty)

KNOW THE FORMULAS FOR THE TEST!!!!

#### Cache Design Space 

several interacting dimensions: cache size, block size, associativity, replacement policy, write through vs write-back

optimal choice is compromise: depends on access characteristics and technology

