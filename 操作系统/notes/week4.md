# 3.15 第7讲 

# 模拟存储：局部页面置换算法

https://baike.baidu.com/item/%E9%A1%B5%E9%9D%A2%E7%BD%AE%E6%8D%A2%E7%AE%97%E6%B3%95

缺页： Page fault interruption means that the page to be accessed is not in the main memory, and the operating system needs to transfer it to the main memory before accessing it. At this time, the [memory- ](https://baike.baidu.com/item/内存/103614)[mapped](https://baike.baidu.com/item/映射/20402620) file actually becomes a paging file.

页面置换算法的概念（局部）- page replacement algorithm 

> Paging is a **storage mechanism** that allows OS to retrieve processes from the secondary storage into the main memory in the form of pages. In the Paging method, the main memory is divided into small fixed-size blocks of physical memory, which is called frames

功能： During the address mapping process, if it is found in the page that the page to be accessed is not in the memory, a [page fault interrupt](https://baike.baidu.com/item/缺页中断/5029040) is generated . When a page fault occurs, if there are no free pages in the [operating](https://baike.baidu.com/item/操作系统/192) system's memory, the [operating system](https://baike.baidu.com/item/操作系统/192) must select a page in the memory to move it out of the memory to make room for the page to be loaded. The rule used to choose which page to eliminate is called the page replacement algorithm.

设计目的：尽可能减少页面的调入调出次数

frame locking : page currently stored in that frame my not be replaced



OPT：最有页面置换算法 (optimal)

- 置换再未来最长时间不访问的页面，remove the page that won't be used for the longest time
- most optimial, but algorithm is impossible to implement, os cannot known will be accessed next

FIFO: 先进先出 first in first out

- 选择再内存
- selects page that enters the memory first, and then exists the memory first: reason: first page transferred into memory is more likely to be no longer used than it is just transferred into memory

LRU: 最近醉酒未使用 least recently used

- if recent past is used as an approximation of the near future, then pages that have not been used for the longest period of time in the past can be replaced.

- When a page fault occurs, the page being pointed to by the hand is inspected. If its *R* bit is 0, the page is evicted, the new page is inserted into the clock in its place, and the hand is advanced one position. If *R* is 1, it is cleared and the hand is advanced to the next page. This process is repeated until a page is found with

  *R* = 0. Not surprisingly, this algorithm is called **clock**. 

CLOCK： 始终页面支置换算法

- https://cs.stackexchange.com/questions/24011/clock-page-replacement-algorithm-already-existing-pages#:~:text=The%20clock%20replacement%20algorithm%20is%20trying%20to%20achieve,in%20memory%20and%20the%20recently-used%20bit%20is%20true.

改进的CLOCK算法

LFU： 最不常用的算法

- a shift register should be set for each page in the memory to record how often the page is accessed.

Belady

![image-20210315032633892](C:\Users\ligeo\Desktop\Y3S2\操作系统\notes\week4.assets\image-20210315032633892.png)

https://prepinsta.com/operating-systems/beladys-anomaly/

# 3.18 第8讲



# 模拟存储：全局页面置换算法

