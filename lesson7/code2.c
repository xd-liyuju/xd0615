int pinInterrupt = 2; //接中断信号的脚

int i;
void setup()
{
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode( pinInterrupt, INPUT);//设置管脚为输入
   
}
 
void loop()
{
  for(i=0;i<10; )
  { attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
   
    digitalWrite(4,i&0x1);
    digitalWrite(5,(i>>1)&0x1);
    digitalWrite(6,(i>>2)&0x1);
    digitalWrite(7,(i>>3)&0x1);
   i++;
    delay(1000);
  } 
 
}
void onChange()
{  
  i=0;
}