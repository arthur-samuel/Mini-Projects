#include <Servo.h>

Servo myservo;
int trigPin = 2;
int echoPin =3;
long distance;
long duration;

void setup() {
  // put your setup code here, to run once:
myservo.attach(7);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin,HIGH);
distance= duration*0.034/2;

int D =map(distance, 100,200,400,500);
if(distance <=550) {
  myservo.write(180); //Open the lid
  delay(1000); //Wait for lid to open
}
else
{
  myservo.write(0); //Close the lid
}
}
