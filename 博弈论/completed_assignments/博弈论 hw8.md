

# 博弈论 hw8

Assignment on ESS

ESS1. Given the symmetric game $[A, A^T]$, where $A = \begin{pmatrix} 5 & 7 & 2 \\ 8 & 6 & 5 \\ 1& 8 & 4 \end{pmatrix}$

Show that $p = (1/4, 3/4, 0)$ is an ESS.

$ B = \begin{pmatrix} 5 & 7 & 0  \\ 8 & 6 & 0 \\ 0 & 0 & 0\end{pmatrix}$

this fits condition 1, where Row 1 and Row 2 are best response to p

Let $Z = (x, -x, 0)^T, \space Z^TBZ^T= -4x^2 < 0$, thus it also satisfies condition 2, making p an ESS 

<hr>

ESS2. Given the symmetric game $[A, A^T]$, where 
$$
A = \begin{pmatrix} 
0 & -1 & 3 & 3 & 3 \\
-1 & 0 & 3 & 3 & 3 \\
1 & 1 & 0 & -1 & -1 \\
1 & 1 & -1 & 0 & -1 \\
1 & 1 & -1 & -1 & 0
\end{pmatrix}
$$
Show that $(0.75, 0, 0.25, 0, 0)$ is an ESS

We know that 
$$
B = \begin{pmatrix} 
0 & 0 & 3 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 \\
1 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{pmatrix}
$$
We know that Row 1 and Row 3 is a best response to p

Let $Z = (x, 0, -x, 0, 0)^T, \space Z^TBZ^T= -4x^2 < 0$, thus it also satisfies condition 2, making p an ESS 

<hr>

ESS3. For the following symmetric games  $[A, A^T]$, find all symmetric equilibrium pairs which use all the pure strategies i.e. find all SE of the form $<p, p>, p_i > 0$ for all $i$. Which of these are ESS?
$$
A_1 = \begin{pmatrix} 4 & 2 \\ 1 & 3 \end{pmatrix}, \space 
A_2 = \begin{pmatrix} 1 & 2 & 3 \\ 2 & 1 & 4 \\ 2 & 3 & 1\end{pmatrix}
$$

For $A_1$

Using one strategy $<\textrm{Row}\space1, \textrm{Col}\space1>,<\textrm{Row}\space 2, \textrm{Col}\space 2>$ are strategic equilibrium because they are the largest in their respective columns. Thus ESS does exist

Using two strategies Row 1 and Row 2, we get $(1/4, 3/4)$ as the mixed strategy.  We see that Row 1 and Row 2 are best responses to Player II's $(1/4, 3/4)$, thus, $<(1/4,3/4),(1/4,3/4)>$ is an SE, thus we get a ESS using  Row 1 and Row 2.

For $ A_2  $

Using one strategy $<\textrm{Row}\space1, \textrm{Col}\space1>,<\textrm{Row}\space 2, \textrm{Col}\space 2>, <\textrm{Row}\space 3, \textrm{Col}\space 3>$ are not strategic equilibrium because they are not the largest in their respective columns.

Thus, we studying using two columns

1. Row 1 and Row 2 

   $A = \begin{pmatrix} 1 & 2 \\ 2 & 1\end{pmatrix}$

   We get $(1/2, 1/2)$ as a mixed strategy, since it is a strategic equilibrium, there is an SE using Row 1 and Row 2. 

2. Row 2 and Row 3

   $A = \begin{pmatrix} 1 & 4 \\ 3 & 1\end{pmatrix}$

   We get $(3/5, 2/5)$ as mixed strategy. Thus we need to check whether $<(0, 3/5, 2/5),(0, 3/5, 2/5) >$ is an SE. Since Row 1 and Row 2 are, is is an SE. Therefore, there is an ESS using Row 2 and Row 3

3. Row 1 and Row 3

   $A = \begin{pmatrix} 1 & 3 \\ 2 & 1\end{pmatrix}$

   We get $(2/3, 1/3)$ as mixed strategy. Thus we need to check whether $<(2/3, 0, 1/3), (2/3, 0, 1/3) >$ is an SE. Since row 2 and 3 are, it is in SE. Therfore, there is an ESS using Row 1 and Row 3

<hr>

ESS4. Given the symmetric game $[A, A^T]$, where $A = \begin{pmatrix} 5 & 7 & 2\\ 8 & 6 & 2 \\ 1 & 8 & 4 \end{pmatrix}$. Are there any ESS that uses only 

1. Row 2 and Row 3

   $A = \begin{pmatrix} 6 & 2 \\ 8 & 4 \end{pmatrix}$

   There exists a saddle point in this game and hence no SE using only Row 1 and Row 2

2. Row 1 and Row 3

   $ A = \begin{pmatrix} 5 & 2 \\ 1 & 4 \end{pmatrix}$

   There exists a mixed strategy $(1/3, 2/3)$ which equalizes on the rows. Then we need to check whether $<(1/3, 0, 2/3), (1/3, 0, 2/3)>$ is a SE. Not that Row 2 and Row  3 are not BR to Player II's $(1/3, 0, 2/3)$, thus it is not an SE. Therefore, there is no ESS using only Row 1 and Row 3.

<hr>

ESS5. (Fischer's Fundamental Theorem of Natural Selection says that the rate of increase in fitness of any organism at any time is equal to its genetic variance in fitness at that time.)

Given an $n\times n$ symmetric matrix A, consider the bimatrix game  $[A, A^T]$. Suppose $(p_1, ..., p_n)$ satisfies the Replicator Dynamics Equations. 

Let $w_i = \sum_ja_{ij}p_j$ and $w=\sum_ip_iw_i$.

Prove the Fundamental Theorem of Natural Selection that 
$$
\frac{dw}{dt}= 2\sum_ip_i(w_i-w)^2
$$
From the above two equations, we can get 
$$
w = \sum_i p_i \sum_j a_{ij}p_j = \sum_{i,j}p_ia_{i,j}p_j
$$

$$
\frac{dw}{dt} = 2\sum_ip_i(w_i-w)^2
$$





<hr>

Personal Notes

ESS - equilibrium stable strategy

- "limited war" among animals - species selection for behavior benefiting the species rather than individuals, but game theory shows that it can benefit individuals as well as species
- "intraspecific conflicts" among animals - conflicts involving inefficient weapons/ritualized tactics that seldom cause injury

Natural Selection

- payoff  - fitness of individuals (incommensurable outcomes can be placed on a single scale of utility according to the contribution they make to reproductive success)
- pure strategy - certain behavior determined by the gene
- mixed strategy
  1. random mechanism that trigger off each of the behaviors
  2. proportion of the population with certain behavior gene

Human Conflicts

- payoff - satisfaction of human desires (strategies are chosen to maximize this)



pESS - large population playing evolutionary stable strategy

pM - small population playing mutant strategy 

$\in$ - proportion of population with mutant strategy 

payoffs 

- pESS : $\pi^{ESS}=(1-\in)\pi(p^{ESS}, p^{ESS}) + \in\pi(p^{ESS}, p^M)$
- pM : $\pi^M = (1-\in)\pi( p^M, p^{ESS}) + \in\pi( p^M, p^M)$

we want $\pi^M < \pi^{ESS}$

