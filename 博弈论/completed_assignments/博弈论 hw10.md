# 博弈论 hw9

RPD1. Given the following matrices for the Prison's Dilemma Game, let $\beta$ be the discount factor
$$
\begin{pmatrix}  2,2 & -1,3 \\ 3,-1 & 0,0 \end{pmatrix}
$$
Find 

1. Find $\delta \in (0,1)$ so that $\beta > \delta$ implies $\left< PR, PR\right>$ is a SE
2. Find $\delta \in (0,1)$ so that $\beta > \delta$ implies $\left< TFT, TFT\right>$ is a SE

Based on Theorem 2, where $\left< PR, PR \right>$ is a SE if $\beta$ is large enough $(T > R > P >S, 2R> T + S)$ 

Supposing that I knows that II  is using PR. Payoff to I if I using PR becomes $R + R\beta + R\beta^2 \dots \rightarrow R = (1-\beta)^{-1}$    
$$
\begin{pmatrix} R,R & S,T \\ T,S & P,P \end{pmatrix}
$$
The payoff to Player 1 becomes 
$$
R(1-\beta^{n-1})(1-\beta)^{-1} + T{\beta}^{n-1} + P{\beta}^n(1-\beta)^{-1}
$$
For PR to be best response to PR, we need 
$$
R(1-\beta)^{-1} \ge R(1-\beta^{n-1}) +T\beta^{n-1} + P\beta^n(1-\beta)^{n-1}
$$
that means 
$$
\beta \ge(T-R)/(T-S)
$$
For part 1, we get that $\beta > (3-2)/(3-(-1)) = 1/4$, thus $\delta = 1/4$  

Based on Theorem 3, where $\left< TFT, TFT\right>$ is SE if $\beta$ is large enough $(T > R > P >S, 2R> T + S)$ ，it suffices to say that when 
$$
\beta > (T-R)/(R-S)
$$
 For part 2, we get that $\beta > (3-2)/(2-(-1))=1/3$ , thus $\delta=1/3$

<hr>

RPD2. Given the following playoff matrices for the Prisoner's Dilemma Game, let $\beta$ be the discount factor
$$
\begin{pmatrix} 2,2 & -1,3 \\ 3,1 & 0,0\end{pmatrix}
$$
Let $s$ be a nice strategy (start with Cooperate and never the first one to Defect) such that $<s,s>$ is a SE. Show that there is a constant $K$ independent of s such that $\beta \geq K$

Theorem 4 states that a nice strategy $\left< S,S \right>$ is a SE. $s$ strategy can be permanent retaliation, where, the player I cooperates until the opponent defects, meaning player I will never be the first one to defect. From the theorem, we can see the above question, that for the strategy $\left< PR, PR \right>$, the value of  $\beta > (3-2)/(3-(-1)) = 1/4$, thus $K = 1/4$.  It can also be a $TFT$ strategy. We can use the results from RPD1 to get the value of $K$

 <hr>

RPD3. Let $S$ be the strategy that it will start with $C$ and continue to do so until the opponent plays $D$ in the previous game. In this case, this strategy will play $C$ with probability 1/3 and $D$ with probability 2/3. Find the transition matrix when Player 1 uses $S$ and Player II uses $TFT$

Strategy $S$ is a nice strategy. So if we assume the strategy is a $TFT$. $\left< TFT, TFT \right>$ is a SE when $\beta$ is large enough, or more specifically, when 
$$
\beta > (T-R)/(R-S)
$$
If the game is played using these two strategies, the game might look like this,

I 		C C C ...

II		C C C ...

<hr>

RPD4. Use the Prisoner's Dilemma payoff matrix in Problem RPD1 to show that in a population using $\left<\text{ALL}\space D, \text{ALL}\space D\right>$ and $\left< PR, PR \right>$ is an ESS when $\beta$ is sufficiently large.

Based on Theorem 1,  $\left<\text{ALL}\space D, \text{ALL}\space D\right>$ is a SE since that if Player I knows II defects all the time, I defects all the time as well (and vice versa). This is an ESS because both players will not change strategies after that. The same concept can be applied to $\left< PR, PR \right>$, when $\beta$ becomes sufficiently large, both players will only choose defects, and will no longer switch from that, making it an ESS.

<hr>

## Personal Notes

tragedy of the commons - dilemma arising from the situation in which multiple individuals acting independently and rationally consulting their own self-interest, will ultimately deplete a shared limited resource, even when it is clear that it is not in anyone's long term interest for this to happen.

prisoner's dilemma 

- T temptation, R reward, P punishment, S sucker's payoff

how to computer total payoff of a game played infinite number of times?

- discount factor $\beta$, $x$ at the $n^{th}$ game is worth $\beta^{n-1}x$ ,
- All $D$, defect all times
- $PR$, Permanent Retaliation, cooperate until , if ever, opponent defects, then defect forever.

- $TFT$, Tit-for-Tat, cooperate first, then do your opponents previous move
- $AltDC$: alternating defect and cooperate, start with D and then alternatively playing C and D

strategy types

- nice - start cooperating and never first to defect

- retaliatory - it should reliably punish defection by its opponent
- forgiving - having punished defection, it should be willing to try to cooperate again
- clear - it's pattern of play should be consistent and easy to predict