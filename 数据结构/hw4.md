# 数据结构 hw4

计83 李天勤 2018080106

## 3.8 

设有一个双端队列，元素进入该队列的顺寻时1，2，3，4. 试分别求出满足下列条件的输出队列

1. 能由输入受限的双端队列得到，但不能有输出受限的双端队列得到的输出序列
2. 能由输出受限的双端队列得到，但不能由输入受限的双端队列得到的输出序列
3. 不能由输入受限的双端队列得到，又不能由输出受限的双端队列得到的输出序列

【解】

输出受限
$$
\rightleftharpoons  [\space\space\space][\space\space\space][\space\space\space][\space\space\space] \leftharpoonup
$$
输入受限
$$
\rightleftharpoons  [\space\space\space][\space\space\space][\space\space\space][\space\space\space] \rightharpoonup
$$

1. 4 1 3 2
2. 4 2 1 3
3. 4 2 3 1