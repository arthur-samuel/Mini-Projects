int ledpin1=1;
int ledpin2=2;
int ledpin3=3;
int ledpin4=4;
int ledpin5=5;
int ledpin6=6;
int ledpin7=7;
int ledpin8=8;




void setup() {
  // put your setup code here, to run once:
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
pinMode(ledpin4,OUTPUT);
pinMode(ledpin5,OUTPUT);
pinMode(ledpin6,OUTPUT);
pinMode(ledpin7,OUTPUT);
pinMode(ledpin8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin1,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,HIGH);
  digitalWrite(ledpin4,HIGH);
  digitalWrite(ledpin5,HIGH);
  digitalWrite(ledpin6,HIGH);
  digitalWrite(ledpin7,HIGH);
  digitalWrite(ledpin8,HIGH);


  digitalWrite(ledpin1,HIGH);
  delay(500);
  digitalWrite(ledpin2,LOW);
  delay(500);
  digitalWrite(ledpin3,LOW);
  delay(500);
  digitalWrite(ledpin4,LOW);
  delay(500);
  digitalWrite(ledpin5,LOW);
  delay(500);
  digitalWrite(ledpin6,HIGH);
  delay(500);
  digitalWrite(ledpin7,LOW);
  delay(500);
  digitalWrite(ledpin8,LOW);
  delay(500);
  
  digitalWrite(ledpin8,HIGH);
  digitalWrite(ledpin7,LOW);
  digitalWrite(ledpin6,LOW);
  digitalWrite(ledpin5,LOW);
  digitalWrite(ledpin4,HIGH);
  digitalWrite(ledpin3,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin1,HIGH);
  delay(500);

  digitalWrite(ledpin8,LOW);
  digitalWrite(ledpin7,LOW);
  digitalWrite(ledpin6,LOW);
  digitalWrite(ledpin5,LOW);
  digitalWrite(ledpin4,LOW);
  digitalWrite(ledpin3,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin1,HIGH);
  delay(500);

  digitalWrite(ledpin8,LOW);
  digitalWrite(ledpin7,LOW);
  digitalWrite(ledpin6,LOW);
  digitalWrite(ledpin5,HIGH);
  digitalWrite(ledpin4,LOW);
  digitalWrite(ledpin3,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin1,LOW);
  delay(500);

  digitalWrite(ledpin8,LOW);
  digitalWrite(ledpin7,HIGH);
  digitalWrite(ledpin6,LOW);
  digitalWrite(ledpin5,LOW);
  digitalWrite(ledpin4,HIGH);
  digitalWrite(ledpin3,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin1,LOW);
  delay(500);

  digitalWrite(ledpin8,LOW);
  digitalWrite(ledpin7,LOW);
  digitalWrite(ledpin6,LOW);
  digitalWrite(ledpin5,LOW);
  digitalWrite(ledpin4,LOW);
  digitalWrite(ledpin3,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin1,LOW);
  delay(500);

  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
  digitalWrite(ledpin4,LOW);
  digitalWrite(ledpin5,LOW);
  digitalWrite(ledpin6,HIGH);
  digitalWrite(ledpin7,LOW);
  digitalWrite(ledpin8,LOW);
  delay(500);

  digitalWrite(ledpin8,HIGH);
  digitalWrite(ledpin7,HIGH);
  digitalWrite(ledpin6,HIGH);
  digitalWrite(ledpin5,HIGH);
  digitalWrite(ledpin4,HIGH);
  digitalWrite(ledpin3,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin1,HIGH);
  delay(500);
}
