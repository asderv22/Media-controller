#include <Mouse.h>
#include <Keyboard.h>

char inchar;      // 串口数据存储
char ctrlKey = KEY_LEFT_CTRL;
char shiftKey = KEY_LEFT_SHIFT;

void setup() {
  Serial.begin(9600);  //usb串口初始化 
  Serial1.begin(9600);  //外部串口初始化
  Keyboard.begin();   //键盘库初始化
  Mouse.begin();      //鼠标初始化
  
}

void loop() {
   while (Serial1.available() > 0) {    //检测串口数据
    inchar = Serial1.read();  //检测信息
    switch (inchar) {
      case 'n':
       Serial.print("cd");  //回复连接状态
      break;
      case 'c':                     
       Mouse.click(MOUSE_LEFT);
       Mouse.release();
       delay(50);
       Keyboard.press(ctrlKey);
       Keyboard.press('a');
       delay(50);
       Keyboard.releaseAll();
       delay(50);
       Keyboard.press(ctrlKey); 
       Keyboard.press('c');
       delay(50);
       Keyboard.releaseAll();
       delay(50);
       Mouse.click(MOUSE_LEFT);
       Mouse.release();
      break;
      case 'p':
       Keyboard.press(shiftKey); 
       Keyboard.press(70+136); 
       delay(50);
       Keyboard.releaseAll();
      break;
      case 'm':
      Mouse.click(MOUSE_LEFT);
      delay(20);
      Mouse.release();
      break;
    }
   }
}
