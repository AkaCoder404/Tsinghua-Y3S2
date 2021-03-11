# 3.10 第3讲

## 2 非线性方程求根

### 2.2 二分法

### 2.3 不动迭代法 

fixed-point iteration: http://www.math.utep.edu/Faculty/nsharma/public_html/m4329_fixedpoint.pdf

定理2.4

定理2.5

定理2.6

### 2.4 牛顿法

newton-raphson method

- 减少不动点迭代法的盲目性
- 比较好的收敛性

用切线近似曲线$f(x)$

also known as 不动迭代法

迭代函数
$$
g(x)=x-\frac{f(x)}{f'(x)}, f(x)= 0, x_{k+1}= x_k - \frac{f(x_k)}{f'(x_k)}
$$
定理2.8

if $f(x)$ has 重根，not necessarily better than 二分法

迭代法的判停准则

缺点

- 局部收敛，依赖与初始解的设定

### 2.5 割线法与抛物线法

- 割线法 secant method 
- 抛物线算法 

牛顿下山法 - 防止牛顿法过程发散

### 2.6 通用求根算法 zeroin



