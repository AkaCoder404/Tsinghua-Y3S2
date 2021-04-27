# 数据结构 lab2

计 83 李天勤 2018080106

## 卡片整理

#### 实验描述

m operations on n stack of cards, each of which begin with 1 card, that cards value equals the stacks value;

each step, take out top card of stack, output number, and put top of another stack

- does not try to move cards from empty stacks
- asks for kth card in the stack

#### 输入

```
first line: n (number stacks), m (number of operations)
next m lines: query, 1 or 2
	if 1: x, y (move top card from a stack x to top of stack y)
	if 2: x, K (output kth card of stack x)
```

#### 提示

can't use two dimensional array

linked list not competent bc data may repeatedly find the same stack

## 烤馍片

#### 实验描述

there are n candies, the ith candy having  a character $s_i$ 

use $s_{l,r}$ to express $s_{l},s_{l+1}, s_{l+2}, \dots,s_{r}$ which represents a string of characters

 find $j$ such that $s_{1,j}$  = $s_{i-j+1,i}$ 

#### 输入n

```
one line: n characters (s1, s2, ..., sn)
```

#### 提示

answer must be non negative because  $j=0$ fits the conditions (2 empty strings are equal)

### 实验结果

https://zhuanlan.zhihu.com/p/83334559

## 彩虹

#### 题目描述

candies with degree of delicacy, arranged the rainbow sweets into a ring

- get the taste of the each sugar on the ring in turn
- every second after that, qiqi will find out the number of 极大 candies and eat them at the same time

极大： if the taste of the sugar is greater than or equal to the taste of two adjacent sugars

if there are only two pieces of sugar left at a certain time, the two pieces of sugar are adjacent to each other; if there is only one piece of sugar left at a certain time, the "two adjacent pieces of sugar" are all their own, so the sugar will be eaten in this second

in what second is each sugar eaten

#### 输入格式

```
line one: n (number of candies)
n inputs: c (candies)
```

1 3 2 4 2 3 1 

candies 3 4 3 eaten at second 1

1 2 2 1

candies 2 2 eaten second 2

1 1 

candies 

candies 1 1 eaten second 3

#### 提示

- 请自己设计高效完成此题所需的数据结构，例如数组、链表、栈、队列、优先队列等。
- 本题可能有多种不同的解题思路。
- 有些解题思路中，可能需要有多个数据结构配合完成此题，而非仅在单个数据结构上进行操作。
- 允许并鼓励使用 STL 中的相关内容。

## 树的遍历

#### 题目描述

binary tree full of lollipops. Each node of the binary tree is a lollipop. Lollipops are represented by 26 lowercase letters. qiaoqiao tells you the 先序遍历 pre order traversal of lollipop tree, please output its middle order traversal

#### 输入

preorder traversal

```
ab#de##f##c#g##
```

输出

middle order traversal

```
bedfacg
```



