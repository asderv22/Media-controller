const int ctrl_c =2;  //引脚定义
const int ptsc =3;
const int mouse =4;
const int led1 =5;
const int led2 =6;
int val_c =0;       //按键存储值定义
int val_p =0;
int val_m =0;
  
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(ctrl_c,INPUT); //指定引脚模式
  pinMode(ptsc,INPUT);
  pinMode(mouse,INPUT);
  Serial.begin(9600);  //串口初始化
  digitalWrite(led1,HIGH);   //boot指示
  delay(1000);
  digitalWrite(led1,LOW);
}

void loop() {
   val_c=digitalRead(ctrl_c);  //电平读取
   val_p=digitalRead(ptsc);
   val_m=digitalRead(mouse);

   
   if (val_c==HIGH){       
    Serial.print("c");
    delay(200);
    digitalWrite(led2,HIGH);   //tx指示
    delay(1000);
    digitalWrite(led2,LOW);
   }
   if (val_p==HIGH){
    Serial.print("p");
    delay(200);
    digitalWrite(led2,HIGH);   //tx指示
    delay(1000);
    digitalWrite(led2,LOW);
   }
   if (val_m==HIGH){
    Serial.print("m");
    delay(200);
    digitalWrite(led2,HIGH);   //tx指示
    delay(1000);
    digitalWrite(led2,LOW);
   }
}
