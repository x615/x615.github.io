# TI 电子设计大赛学习笔记

### 运算放大器的选型指南
1.运放的功能 

运放+外部分立器件= 

放大器：改变信号的幅度 

缓冲器：隔离输入与输出，阻抗匹配（高输入阻抗，低输出阻抗） 

滤波器：滤除额外频率分量（噪声，干扰） 

各运算功能：积分，微分，乘法，对数。 

2.运放关注的指标

输入端口相关指标：

— 输入阻抗 运放的输入阻抗要远大于信源电阻，如10K要选择100K以上的输入阻抗到达90%的精度，1M则能到达99%精度。

— 带宽GBW  VFB型运放受增益限制  Gain * Bandwidth = GBP 

— 偏移电压  

— 偏置电流  

— 输入电压范围 关键字Vcm，保证输出不被削顶 

— 噪声特性 

输出端口的相关指标 

— 输出驱动能力current output

— 输出电压范围 

— 压摆率slew rate  限制输出大信号的线宽。

供电相关指标

— 供电压范围

— 静态电流

相关网址 www.ti.com.cn 或者www.ti.com 

Precision Lab Training :https://training.ti.com/ti-precision-labs-op-amps

TINA-TI:http://www.ti.com.cn/tool.cn/tina-ti 
    
 <p align="center"> 
  <img src="https://github.com/x615/x615.github.io/blob/master/%E5%91%BD%E5%90%8D%E8%A7%84%E5%88%99.png" width="600" height="360"/> 
  <p align="center">  
    <em>命名规律</em> 
    </p>
     </p>   
  
<p align="center"> 
  <img src="https://github.com/x615/x615.github.io/blob/master/%E9%80%89%E5%9E%8B%E6%8C%87%E5%8D%97.png" width="600" height="360"/> 
  <p align="center">  
    <em>选择指南</em> 
    </p>
     </p> 
     


### 电源器件在电赛中的应用 

1.电源概览  

直流转直流：线性电源（只能降压），开关电源。 

交流转直流： 模电教材481。 

2.电源设计工具 

WEBENCH 每周一练 www.nuedc-training.com.cn/index/answer/index
  
### 资源篇 
















### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
