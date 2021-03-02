# 3.2 第2讲

## 光图形学

光的普分布 - what is it lacking? - 异谱同色

human eye breakdown

why rgb? C = rR + gG + bB, because our eyes detect it this way

- 缺点 - not all colors can be represented, such as when wavelength is around 500
- CMY, complements of RGB, 减色系统
- aka 加色系统
- CMYK， 减性混合
- hard to imagine, so 艺术家 don't use

HSV  instead, hue (调色), saturation (饱和度)，brightness (亮度)

- 艺术家 like to use this instead

CIE XYZ

- bc RGB can not represent all colors, this can (with all values being positive)

图像和像素， pixel， 

三角网格模型?

- 由一个系列欧民空间中的三维顶点以及连接这些顶点的若干三角面片组成，具体包括
- 绘制 smooth shading 
- 法向量 normal， 朝向

图形学目的？从虚拟的三维场景 ...

三角网格的简单绘制？ 

- 基于颜色绘制
- 基于光照的绘制

光照模型 lightning model or illumination model

- 局部光照名 local lighting, only deals with lighting directly affecting the model
- 全局光照明global lighting

光的传播 - reflection, refraction

光的度量 - 立体角，光通量，发光强度

### Phong 光照模型

- parts: L， R，N， V
- 漫反射光效果
- 镜面反射光效果
- 环境光效果

### 明喑处理 （shad          ing)

Gouraud - 

Phong - 

flat shading vs phong shading, 

### 视点变换和视点方向

transformation - morphing, viewing, projection

简单变换 - identity, translation, rotation, isotropic scaling (均衡变换)

变换的分类 - 

变换表达式 - 



## 第一个实验

RasterGraphics









