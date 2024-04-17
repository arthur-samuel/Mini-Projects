#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 44
#define T_B 493

 int C = 8;
 int D = 7;
 int E = 6;
 int F = 5;
 int G = 4;
 int A = 3;
 int B = 2;

 int Buzz = 10;
 int LED = 11;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C, HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D, HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E, HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F, HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G, HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A, HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B, HIGH);
  
  digitalWrite(LED, LOW);
}

void loop() {
  while (digitalRead(C) == LOW) {
    tone(Buzz, T_C);
    digitalWrite(LED, HIGH);
  }
  
  while (digitalRead(D) == LOW) {
    tone(Buzz, T_D);
    digitalWrite(LED, HIGH);
  }
  
  while (digitalRead(E) == LOW) {
    tone(Buzz, T_E);
    digitalWrite(LED, HIGH);
  }
  
  while (digitalRead(F) == LOW) {
    tone(Buzz, T_F);
    digitalWrite(LED, HIGH);
  }
  
  while (digitalRead(G) == LOW) {
    tone(Buzz, T_G);
    digitalWrite(LED, HIGH);
  }
  
  while (digitalRead(A) == LOW) {
    tone(Buzz, T_A);
    digitalWrite(LED, HIGH);
  }
  
  while (digitalRead(B) == LOW) {
    tone(Buzz, T_B);
    digitalWrite(LED, HIGH);
  }
  
  noTone(Buzz);
  digitalWrite(LED, LOW);
}