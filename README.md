一个媒体控制器
====
还在施工
----
*这只是一个普通的无线媒体控制器*   <br>
基于arduino 无线传输使用2.4Ghz频段  <br>
<br>
~~zhongbest的模块好用 不是广告~~  <br>

可实现功能 /functions
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
电池&充电电路（eg.ETA9640） x1 <br>
按键开关 x3 为了手感 ~~正好多出来~~ 使用了凯华茶轴 <br>
led x2 这里用了一红一绿 **由于通过arduino的io端口驱动 led的正向压降不能大于4v**<br>
<br>

**接收端**
ardunio promicro x1  <br>
2.4ghz透传  x1  <br>
*这边直接usb取点 电池就不需要了*  <br>
*喜欢指示灯可以自己加*  <br>
<br>

别的一点东西
----
造它出来还是为了 ~~好玩~~ 实验目的  <br>
files里的小问题 就当本来就存在吧  <br>
**打印件使用Sketchup绘制并输出stl**  <br>
**由于Sketchup特殊的实体密封 不保证所有切片软件&上位机不出错**  <br>
<br>
~~issues看心情~~
