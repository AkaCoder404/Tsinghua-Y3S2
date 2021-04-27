# 数值分析 lab3

## 第3章上机题6

编程生成Hilbert矩阵$H_n$（见例3.4），以及n维向量$b= H_nx,$其中$x$为所有分量都是1的向量，用Cholesky分解算法求解方程$H_nx=b$,得到近似解$\hat{x}$，计算残差$r=b-H_n{\hat{x}}$和误差$\Delta x=\hat{x}-x$的$\infty-$范数

1. 设$n=10$,计算$||r||_{\infty},||\Delta x||_{\infty}$
2. 在右端顶上施加$10^{-7}$的扰动然后解方程组，观察残差的变化情况
3. 改变n的值为8和12，求解相应的方程，观察$||r||_\infty$, $||\Delta x||_\infty$的变化情况，通过这个是按说明了什么问题？

## Cholesky算法实现

In the textbook, the pseudo-code for the Cholesky algorithm is as shown below.

<img src="数值分析 lab3.assets/image-20210420093555114.png" alt="image-20210420093555114" style="zoom: 80%;" />

Thus, in order to realize the algorithm, we have to realize the code above. 

``` matlab
function L = cholesky(A)            % input square matrix A
    n = size(A,1);                  % get dimensions of A             
    L = zeros(n,n);                 % resulting matrix
    L(1, 1) = sqrt(A(1,1));         % l11 = a11^2, first entry at (1,1)
    for j = 1 : n                   % For j = 1, 2, ..., n
        for k = 1 : j - 1           % For k = 1, 2, ..., j-1
            A(j,j) = A(j,j) - A(j,k) * A(j,k); % ajj := ajj - (ajk)^2
        end
        A(j,j) = sqrt(A(j,j));      % ajj := sqrt(ajj)
        L(j,j) = A(j,j);            % ljj = sqrt(Ajj - sum{(ljk)^2})
        for i = j + 1 : n           % For i = j + 1, j + 2, ..., n
            for k = 1 : j - 1       	% For K = 1, 2, ..., j - 1
                A(i,j) = A(i,j) - A(i,k) * A(j,k); % aij := aij - aik * ajk
            end
            A(i,j) = A(i,j) / A(j,j);   % aij = aij/ajj
            L(i,j) = A(i,j);            % lij = aij - si,{lik;kl}/ljj
        end
    end
end
```

Then we need to calculate $||r||_\infty$ and $||\Delta x||_\infty$

```matlab
n = 10;                 % n = 10
H = hilb(n);            % create Hilbert Matrix of size n
x = ones(n,1);          % ones vector of size n 
b = H * x;              % calculate b = Hx to find actual solution
L = cholesky(H);        % calculate Cholesky Method for L
                        % H = LL^T, thus b = LL^Tx, approxixmation 
sol = L.' \ (L \ b);    % xbar = (L^T)^-1 * L^-1 * b

% calculate ||r||_\infty and ||\delta x||_infty
r = b - H * sol;
dx = sol - x;
disp("norm(r): " + norm(r,inf));
disp("norm(dx): " + norm(dx,inf));
```

If we were to incorporate a disturbance of $10^-7$,

```matlab
bd = b + ones(n,1) * 1e-7;  
sold = L.' \ (L \ bd);
rd = bd - H * sold;
dxd = sold - x;
disp("norm(rd): " + norm(rd,inf));
disp("norm(dxd): " + norm(dxd,inf));
```

## 实验结果

For each of the test cases, $n = 8, 10, 12$

```matlab
% n = 8
>> lab3_6
norm(r): 4.4409e-16
norm(dx): 7.0128e-07
norm(rd): 2.2204e-16
norm(dxd): 0.021622
% n = 10
>> lab3_6
norm(r): 4.4409e-16
norm(dx): 0.00040521
norm(rd): 4.4409e-16
norm(dxd): 0.70073
% n = 12
>> 
>> lab3_6
norm(r): 4.4409e-16
norm(dx): 0.055272
norm(rd): 2.2204e-16
norm(dxd): 23.7071
```

## 实验结果分析

From these results, we can easily see that as n increases, the residual does not change. However, the error, $\Delta x$ increases significantly, thus showing that is sensitive to disturbance. This proves the fact that Hilbert matrix is ill conditioned. 