# 2.24 第1讲

Game Theory 2021 Spring

grades: 
- attendence 5%
- assignments 35%
- project 15%
- examination 45%

game theory can be called "interactive decision theory", studies competition or cooperation between rational and intelligent decision makers

minimax theorem for 2-person 0-sum games

3 different mathematical models to describe a game:
- extensive form
- strategic form 
- coalition form

## Two Person 0-sum Games
john von neumann

essential information to build a mathematical model
- two players
- set of actions to choose from
- associated to the choice of action of one player, there is a payoff from the other player

### strategic form of 2-person 0-sum game
given by the triplet (X, Y, A) where
X is a nonempty set, the set of strategies of player 1
Y is a nonempty set, the set of strategies of player 2
A is a real valued function defined on X x Y

simultaneously, player 1 chooses x \in X, player 2 chooses y \in Y, both unaware of each others choices

the payoff function A, can be represented by a matrix

choice aij = A(xi, yj)
player 1 chooses row, player 2 chooses col, entries of matrix are winnings of the row chooser and losses of the col chooser

remove dominated strategies

best response

equilibrium principle: best responses to each other, involves the interactions of the players

maximin principle: safety first, undr this principle, each player only concerns his/her own payoff

BR to each other in pure strategies
- saddle points, pure strategic equilibrium, PSE, for 2-person 0-sum games

labeling algorithm to find saddle points

a game may have several saddle points,

**maximin principle** means to find the "risk" for each strategy and then find strategy, known as the **safety strategy**, with minimum risk
- one can guarantee to get at least a certain amount of payoff


mixed strategies