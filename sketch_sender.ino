const int ctrl_c =2;  //引脚定义
const int ptsc =3;
const int mouse =4;
int val_c =0;       //按键存储值定义
int val_p =0;
int val_m =0;
  
void setup() {
  pinMode(ctrl_c,INPUT); //指定引脚模式
  pinMode(ptsc,INPUT);
  pinMode(mouse,INPUT);
  Serial.begin(9600);  //串口初始化
}

void loop() {
   val_c=digitalRead(ctrl_c);  //电平读取
   val_p=digitalRead(ptsc);
   val_m=digitalRead(mouse);

   
   if (val_c==HIGH){       
    Serial.print("c");
    delay(200);
   }
   if (val_p==HIGH){
    Serial.print("p");
    delay(200);
   }
   if (val_m==HIGH){
    Serial.print("m");
    delay(200);
   }
}
