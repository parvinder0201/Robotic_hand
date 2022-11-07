#include<Servo.h>
Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo little;
void setup ()
{
  thumb.attach(11);
  index.attach(10);
  middle.attach(6);
  ring.attach(5);
  little.attach(3);
  Serial.begin(9600);
}
void loop()
{
  int thumbS=analogRead(A0);
  int indexS=analogRead(A1);
  int middleS=analogRead(A2);
  int ringS=analogRead(A3);
  int littleS=analogRead(A4);
  Serial.println(thumbS);
  Serial.println(indexS);
  Serial.println(middleS);
  Serial.println(ringS);
  Serial.println(littleS);
  
  thumbS=map(thumbS,59,256,0,180);
  indexS=map(indexS,59,256,0,180);
  middleS=map(middleS,59,256,0,180);
  ringS=map(ringS,59,256,0,180);
  littleS=map(littleS,59,256,0,180);
  
  thumb.write(thumbS); 
  index.write(indexS);  
  middle.write(middleS);  
  ring.write(ringS);
  little.write(littleS);
  delay(4000);
  
}