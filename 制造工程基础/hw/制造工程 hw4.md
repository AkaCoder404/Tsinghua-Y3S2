# 制造工程 hw4

计 83 李天勤 2018080106

2.2.1 金属望性变形中的应力和应变

2.2.3 锻造

## 第1题

请描述真实应力-应变曲线的数学方程。并请证明：该数学方程中的硬化指数n，在数值上等于缩颈开始时的真实应变。已知莫材料的工程抗拉轻度为340MPa, 到达拉伸极限（缩颈）时的工程应变为0.3，试计算材料的真实抗拉强度，并求B与n

材料真实抗拉强度

$Y = B\epsilon^n$ 

$\epsilon = \ln{(1 + \alpha)}, \alpha = 0.3$

$ Y = \sigma \cdot(1+\epsilon), \sigma=340 \Rightarrow Y = 442 MPa$

$n = \epsilon = 0.2624 $

$\therefore B = Y \epsilon^n = 627.9 MPa$

## 第2题

一台水压机最大锻压能力为1,000,000 N, 圆柱形工件的直径为30mm，高度30mm，材料的强度系数B=950 MPa，硬化指数 n=0.14， 请计算工件在这台设备上高度方向上的最大减少量试多少？请设摩擦系数 $\mu =0.1$

初始高度为 $h=30mm$，初始直径为$d = 30mm$，材料强度 $B=950MPa$ ，硬化指数 $n=0.14$, 抹茶系数 $\mu = 0.1$

锻后横面积 $S = \frac{\pi \times r^2 \times h_0}{h}$

真应变 $\epsilon = \ln{\frac{h_o}{h}}$

真实应力 $\sigma = \mu \cdot B\epsilon^n$ 

所有的锻压力 $F=\sigma S$

所以
$$
F = \mu \cdot B \epsilon^n * \frac{\pi \times r^n \times h_0 }{h}
$$
求$h的值$，$h=19.2, \Delta h = 10.8$ 



