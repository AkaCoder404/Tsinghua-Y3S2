# 实验1

计 83 李天勤 2018080106

##  第一章上机题1

### 实验目标

用MATLAB编程实现例1.4，会出图1-2，体会两种误差队结果不同影响

<img src="C:\Users\ligeo\Desktop\Y3S2\制造工程基础\image-20210314103919302.png" alt="image-20210314103919302" style="zoom:80%;" />

<img src="C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210314103957194.png" alt="image-20210314103957194" style="zoom:80%;" />

### 实验过程

代码

```
h = logspace(-16, 0, 1000);
truncation = h/2;
rounding = 0.0000000000000001 * h .^ -1;
epsilon = truncation + rounding;
error = abs(((sin(1+h)-sin(1)) ./h) - cos(1));
loglog(h,epsilon,'--b', h,truncation, '--k', h, rounding, '--k', h, error, 'r'),axis([0.0000000000000001 1 0.00000000000000001 10]);
```

代码简介

1. $logspace(A,B,N)$ generates a vector of length N, containing points between 10^A and 10^B evenly along a logarithmic axis. We use it to create vector of h values (x-axis)

2. ```truncation``` represents 截断误差 
   $$
   截断误差= \frac{Mh}{2}, M =1
   $$
   

3. ```rounding``` represents 舍入误差
   $$
   舍入误差 = \frac{2\epsilon}{h}, \epsilon=10^-16
   $$

4. total error 总误差 is represented by  ```epsilon = rounding + truncation```

   since we know that 
   $$
   f(x)=\sin(x),f'(x) \approx \frac{f(x+h)-f(x)}{h},
   $$
   error $x=1$ with $h $ is equal to approximation - actual
   $$
   \left |\frac{\sin(1+h)-\sin(1)}{h} - \cos(1)\right|
   $$
   this represents 实际总误差

5. then we plot the values using loglog which plots *x*- and *y*-coordinates using a base 10 logarithmic scale on the *x*-axis and the *y*-axis, it is useful when dealing with logarithmic scales

### 实验结果

![image-20210316085105469](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210316085105469.png)

## 第一章上机题3

### 实验目的

编程观察无穷级数
$$
\sum^\infty_{n=1}{\frac{1}{n}}
$$
的求和计算

1. 采用IEEE单精度浮点数，观察当n位何值时，求和结果不再变化，将它于理论分析的结论进行比较（注：在MATLAB中可用single命令将变量转成单精度浮点数）

2. 用IEEE双精度浮点计算（1）中前n项的和，评估IEEE单精度浮点数计算结果的误差。

3. 如果采用IEEE双精度浮点数，估计当n为何值时求和结果不在变化，这在当前做实验的计算机上大概需要多场的计算时间


### 实验过程

code is located in lab1_3.m

```sum = single(1)``` converts the matrix 1 into a single precision

1.  Use a while loop to record the sum value, stay in loop until the difference between sum and last approximately equals 0. 

   ```
   sum = single(1);
   last = single(0);
   j = 1;
   
   while sum - last ~= 0
   	last = sum;
   	j = j + 1;
   	sum = sum + 1/j;
   end
   disp(j);
   ```

2. same as part 1, with the removal of single function

   ```
   single_sum = single(1);
   single_last = single(0);
   
   j = 1;
   while single_sum - single_last ~= 0
   	single_last = single_sum;
   	j = j + 1;
   	single_sum = single_sum + 1 / j;
   end
   
   double_sum = 1;
   i = 1;
   while i ~= j
   	i = i + 1;
   	double_sum = double_sum + 1/i;
   end
   
   disp(single_sum);
   disp(double_sum);
   disp((single_sum - double_sum) / double_sum);
   
   ```

### 实验结果

1. ```
   2097152
   ```

2. ```
   15.4037
   15.1333
   0.0179
   ```

3. Double precision numbers have at most 16 significant digits, so when $1/n = 5 \times 10^{-16}$, the sum no longer changes,where $n=2 \times 10^{15}$. The frequency of the computer used in the experiment is 2.8GHz, so it takes will take about $2 \times 10^6$ seconds, or about 23 days. 



