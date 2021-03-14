# 3.39 第3讲

双向反射分布函数 - BRDF Bidirectional Reflectance Distribution Function

球面坐标 - spherical coordinates 

- 立体角 solid angle
- 投影面积 foreshortened area
- 光能 radiant energy
- 光通量 radiant flux
- 发光强度 intensity
- 光亮度 radiance
- 辉度 irrandiance

> vaguely speaking, irradiance is the amount of light coming to a certain point from possibly all directions, while radiance is the amount of light incoming to a point from a single direction

BRDF - is a function of four real variables that define how light is reflect an an opaque surface

![image-20210309082001183](/home/akashili17/.config/Typora/typora-user-images/image-20210309082001183.png)

where L is the radiance, or power per unit solid-angle-in-the-direction-of-a-ray per unit projected-area-perpendicular-to-the-ray, E is irradiance, or power per unit surface area, and $\theta_i$ is the angle between $w_i$ and the surface normal, n. The index i indicates incident light, whereas the index r indicates reflected light.

特性

- 可逆性 reciprocity ![image-20210309082612190](/home/akashili17/.config/Typora/typora-user-images/image-20210309082612190.png)
- 能量守恒![image-20210309082639462](/home/akashili17/.config/Typora/typora-user-images/image-20210309082639462.png)
- 渲染方程 rendering equation

BRDF 模型 

- 经验模型 emperical models
  - lambertian - defines an ideal "matte" or diffusely reflecting surface 漫反射 （diffusing), cannot represent mirror-like materials
  - phong -describes way surface reflects light as a comibination of diffuse reflection of rough surfaces with teh specular reflection of shiny surfaces
  - blinn-phong 
  - fast-phong shading
  - 可逆 phong 模型 莫地方ied炮轰莫的了
- 基于物理的模型 physical-based models
  - surface roughness
  - 非涅尔项 fresnel term 
  - cook torrance - add metallic look
- 数据表达的 型 data-driven models
  - ward 模型 





Does not account for 透明 materials, where light enters the center of objection

BTDF bidirectional transmittance disstribution function

BSSRDF mixture of BTDF and BRDF

