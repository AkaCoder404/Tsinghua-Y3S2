# 博弈论 hw1

计83李天勤2018080106

assignment on zero-sum games

1. show that if a matrix game ```A``` has two saddle points then their values must be equal 

   【解】The saddle point is known as the value of the game, since it represents the minimum assured payoff to both players. In other words, if both players make rational decisions, they must play into a saddle point. A game can have multiple saddle points, but not of different values. A saddle point is defined as the smallest value of a row, but the biggest value of the column.

   If we define $a$ and $b$ to be the two saddle points of a game, we need to consider the following three scenarios.

   1. they are in the same row
   2. they are in the same column
   3. they are in different rows and in different columns

   If they are in the row, since $a$ is the smallest entry in that row, and $a\leq b$, and so is $b$, then $b=a$ since $b$ also has to be the smallest value in that row. The same concept is applied to when they are in teh same columns.

   If they are in different rows and columns, they form the opposite corners of a rectangle inside the game matrix. Let the other two corners be known as $c$ and $d$, forming the following visual
   $$
   \left(\begin{array}{cc} 
   a & ... & c\\
   \vdots &  & \vdots \\
   d & ... & b
   \end{array}\right)
   $$
   based on the rules of a saddle points, we can derive the following inequalities
   $$
   a \leq c \leq b
   $$
   and 
   $$
   b \leq d \leq a
   $$
   Resulting in the inequality 
   $$
   a \leq c \leq b \leq d \leq a
   $$
   

   Thus, all values are equal and therefore $a=b$. 

2. show that if a 2x2 matrix game has a saddle point then it either has a dominated row or a dominated column (does not work for bigger games)

   【解】Lets define the saddle point as $a$, with the remaining values as as $b,c,d$, we get the following matrix
   $$
   \left(\begin{array}{cc} 
   a & b\\
   c & d
   \end{array}\right)
   $$
   However, if we know that $a$ is the saddle point, then we can derive the following equations, 
   $$
   a \leq b, a\geq c, \rightarrow c\leq a \leq b
   $$
   If $b \leq d $, then  $c \leq d$ as well, and thus the second column dominates the first the first ($ a \leq b, c \leq d$. ). If this does not occur, then $b \ge d$, and thus  $ c \leq  b$, then the first row dominates the second.  We can use the same logic with  $c$

3. given the matrix game
   $$
   \left(\begin{array}{cc} 
   1 & 2 & 3\\
   3 & 2 & -1
   \end{array}\right)
   $$

   1. find the BR to a player 1's strategy of (0.5, 0.5)
      $$
      \left(\begin{array}{cc} .5 &  .5\end{array} \right)\left(\begin{array}{cc} 
      1 & 2 & 3\\
      3 & 2 & -1
      \end{array}\right) = \begin{array}{cc}(2 & 2 & 1) \end{array}
      $$
      the best response to player 1's strategy is column 3

   2. find the set of all BR to (0.5, 0.5) 

      set of all BR is { 1 }

   3. find a BR to players 2's startegy of (1/3, 1/3, 1/3)
      $$
      \left( \begin{array}{cc} 1 & 2 & 3 \\ 3 & 2 & -1  \end{array} \right) \left( \begin{array}{cc} 1/3 \\ 1/3 \\ 1/3 \end{array} \right) = \left( \begin{array}{cc}  2 \\ 4/3\end{array} \right)
      $$
      the best strategy to player 2 is row 1.

4. given the matrix game ```A``` , let ```p``` be a mixed strategy of player 1. show that the set of BR to ```p``` is a convex set. 

   ​	【解】We know that 

   > a set C is called a convex set if $p,q\in C$ imlies $\lambda p + (1-\lambda)q \in C $, for any $\lambda \in [0,1]$

   We can set $q$ as the mixed strategy of player 2.  We want to prove that if $ p (p = p_1, p_2 ... p_n, i = 1 ... i), p_i^T \in BR(q)$, and then the mix of these two strategies, Let $p_i, p_i^T$ be two mixed strategies so that $\lambda p_1 + (1-\lambda)p_2 (0 \leq \lambda \leq 1 )$, is also a best response, 

   If  we know that the opposing strategy is $q$, even if it is mixed, then $u_i (\lambda p_i  + (1-\lambda)p_i^t,q_{-i}) = \lambda u_i(p_i, q_{-i}) + (1-\lambda)u_i(p_i^T, q_{-i})$ and so if  $u_i(p_i, q_-i)$ = $u_i(p_i^T), q_{-i}$ then $u_i (\lambda p_i + (1-\lambda)p_i^t , q_{-i})$ is euqal to both of them. Thus making the best response to mixed strategy of player 1 to also be a convex set.

   

   

   

   

