一个媒体控制器
====
English vision in the second part
----
*这只是一个普通的无线媒体控制器*   <br>
基于arduino 无线传输使用2.4Ghz频段  <br>
<br>
~~zhongbest的模块好用 不是广告~~  <br>

可实现功能 
----
由于接收端使用了promicro 因此能够实现鼠标和键盘模拟  <br>
所以说  <br>
**应该叫它无线自定义宏键盘**  <br>
~~可是只有三个键~~  <br>
***5.26添加***  发送端电源和tx指示灯 <br>

使用材料
----
**发送端**  <br>
ardunio nano(Atmel328p) x1  <br>
2.4ghz透传 x1  <br>
电池&充电电路（eg.FM9603） x1 <br>
按键开关 x3 为了手感 ~~正好多出来~~ 使用了凯华茶轴 <br>
led x2 这里用了一红一绿 **由于通过arduino的io端口驱动 led的正向压降不能大于4v**<br>
<br>

**接收端** <br>
ardunio promicro x1  <br>
2.4ghz透传  x1  <br>
*这边直接usb取电 电池就不需要了*  <br>
*喜欢指示灯可以自己加*  <br>
<br>

关于文件的重要解释
----
电路原理图在files里 展示为pdf文件   <br>
原理图通过lceda绘制 .json文件是lceda源码   <br> 
允许导入再编辑  <br>
<br>

其他一点东西
----
造它出来还是为了 ~~好玩~~ 实验目的  <br>
files里的小问题 就当本来就存在吧  <br>
**打印件使用Sketchup绘制并输出stl**  <br>
**由于Sketchup特殊的实体密封 不保证所有切片软件&上位机不出错**  <br>
~~issues看心情~~ <br>
<br>

English vision
----
**It's a simple wireless media controller** <br>
based on arduino &2.4Ghz transform <br>
<br>
Functions
----
Since the receiver is based on arduino promicro<br>
it can implement **wireless** mouse and keyboard emulation<br>
~~only has three keys~~
<br>
1
Materials used
----
**transmitter** <br>
arduino nano(Atmel328p) x1 <br>
2.4Ghz DTU x1 <br>
Li-po battery &charge circuit (eg. ETA9603) x1  <br>
tact switch x3 (which I usde three MX switches) <br>
led x2 (as power and TX indicator)<br>
**since the leds are driven by the arduino io ports,the forward voltage drop of the led should below 4v** <br>
<br>
**receiver**  <br>
arduino promicro x1 <br>
2.4Ghz DTU x1 <br>
*since it's powered by usb ports,there's no need to use battery* <br>
<br>

Important explainations of the files
----
the circuit diagrams are shown as .pdf files in the\files folder <br>
diagrams are drew using LCEDA <br>
the .json files are LCEDA source codes which allow import and reedit <br>
<br>

Something more
----
this product is built for ~~fun~~ testing purpose <br>
so there may be some small (or enormous) problems <br>
**the 3d print .stl files are created via Sketchup** <br>
**due to the special solid sealing of Sketchup**  <br>
**there might be small problems while using different slicing softwares (it works fine with cura)**  <br>
**double check your slicing software before print** <br>

