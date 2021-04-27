# 数值分析 hw4

计 83 李天勤 2018080106

1. ![image-20210323215833195](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210323215833195.png)

   【解】计算题

   $\infty - norm: ||A||_\infty = 0.6 +0.5 = 1.1$

   $1-norm:||A||_1=0.5+0.3=0.8$

   $2-norm: A^TA= \begin{bmatrix} 0.6&0.1\\0.5&0.3\end{bmatrix} \begin{bmatrix} 0.6&0.5\\0.1&0.3\end{bmatrix} = \begin{bmatrix} 0.37&0.33\\0.33&0.34\end{bmatrix}$

   $det(A^TA-\lambda I) = \begin{bmatrix} 0.37-\lambda&0.33\\0.33&0.34-\lambda\end{bmatrix} = (0.37-\lambda)(0.34-\lambda)-0.33^2$

   最大绝对值 $\approx-.685, \therefore ||A||_2 = \sqrt{\lambda} \approx 0.828$, 

2. ![image-20210323215854153](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210323215854153.png)

   【解】Proof
   $$
   \vec{x} \in \R^n, \vec{x} = (x_1, x_2, ...,x_n)
   $$

   $$
   ||\vec{x}||_1 = |x_1| + ... + |x_n|
   $$

   $$
   \arg{\max_{1 \leq i\leq n}{|x_i|}} = t, |x_t| 是最带绝对值
   $$

   $$
   ||\vec{x}||_1 = |x_1| + ... |x_t| + |x_{t+1}| + ... + |x_n| \leq |x_t| = ||\vec{x}||_\infty
   $$

   $$
   ||\vec{x}||_1 = |x_1| + ...+|x_n|\leq n *|x_t|= n||\vec{x}||_\infty \Rightarrow ||\vec{x}||_\infty \leq ||\vec{x}||_1 \leq ||\vec{x}||_\infty * n \space\qed
   $$

   

3. ![image-20210323215906951](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210323215906951.png)

   【解】 Proof 
   $$
   \forall x \in \R^n, ||x||_p = ||p_x|| \geq 0， 且Px=0  \iff x=0
   $$

   $$
   \forall \alpha \in \R, \alpha ||x||_p = \alpha ||Px|| = ||\alpha P x|| = ||P(\alpha x)|| = ||\alpha x||_p
   $$

   $$
   \forall x,y \in \R^n, ||x||_p + ||y||_p \geq ||Px + Py|| = ||P(x+y)|| = ||x+y||_p 
   $$

   $$
   \therefore ||x_p|| 是 \R^n 上的一种范数
   $$

4. ![image-20210323215925025](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210323215925025.png)

   【解】计算题
   $$
   cond(A)_\infty=||A||_\infty||A^{-1}||_\infty
   $$

   $$
   A = \begin{bmatrix} 2\lambda&\lambda \\1&1 \end{bmatrix}, A^{-1} \begin{bmatrix} \frac{1}{\lambda}  & -1 \\ -\frac{1}{\lambda} & 2 \end{bmatrix}
   $$

   $$
   cond(A)_\infty = \max{2, |3\lambda|} \cdot(2+\frac{1}{|\lambda|})
   $$

   当 $|\lambda| < 2/3$ 时， $cond(A)_\infty = 4 + 2/|\lambda|$ 单调递减

   当 $|\lambda| > 2/3$ 时，$cond(A)_\infty = 6|\lambda| + 3$ 单调递增

   当 $|\lambda| = 2/3 $时，最小值，$\therefore \lambda = \pm 2/3, cond(A)_\infty 取最大值$

   

7. ![image-20210323215953784](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210323215953784.png)

   【解】Proof

   高斯消去法一部后、
   $$
   A = \begin{bmatrix} a_{11} & \vec{a}^T  \\ \vec{a_1} & A'_2 \end{bmatrix}
   $$

   $$
   A'_2 - \frac{1}{a_{11}} \vec{a_1} \vec{a_1}^T = A_2
   $$

   if A is symmetrical, then $A_2'$ is symmetrical and $ \vec{a_1} \vec{a_1}^T$ is also symmetrical

   $$ \therefore A_2 = A'_2 - \frac{1}{a_{11}} \vec{a_1} \vec{a_1}^T$$ is also symmetrical

8. ![image-20210323220008130](C:\Users\ligeo\AppData\Roaming\Typora\typora-user-images\image-20210323220008130.png)

   【解】Proof

   1)  We know that A is orthogonal, $x^TAx > 0$, thus $a_{11} > 0$ 

   2) From 7, we know that A is symmetrical, next we have to prove orthogonality

   Using the above matrix, we can eliminate the top right element using the left column, resulting in the matrix  
   $$
   \begin{bmatrix} a_{11} & 0 \\ 0 & A_2 \end{bmatrix}
   $$
   is also orthogonal $\forall x_o \in \R^{n-1}, x=(0, x_o^T)^T, A''x = A_2x_o >0, A_2$ is also orthogonal 

   