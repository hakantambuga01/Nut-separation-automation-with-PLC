#include <Servo.h>
Servo myservo;
#define plc_giris A0
void setup() 
{
 pinMode(plc_giris,INPUT);
 myservo.attach(3);
 myservo.write(90);
}
void loop()
{
  int a=1;
  if(digitalRead(plc_giris)==HIGH)
  {
    while(a==1)
    {
      myservo.write(125 );
      delay(300);
      myservo.write(90);
      delay(4000);
      if(digitalRead(plc_giris)==LOW){ a=0; }
    }
  }
}
