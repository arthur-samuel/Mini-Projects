#include <LiquidCrystal.h>
#include <Servo.h>

Servo GE1;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int trigPin = 13; // pin connection for trigger 
int echoPin = 10; // pin connection for echoPin

void setup() {
  int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; // board pin connections for the specific lcd pins used
  lcd.begin(16, 2);
  GE1.attach(9);
  Serial.begin(9600);
}

void loop() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  digitalWrite(trigPin, LOW);
  delay(200);
  digitalWrite(trigPin, HIGH);
  delay(1000); //  triggering
  digitalWrite(trigPin, LOW);

  float duration = pulseIn(echoPin, HIGH); // Measure the pulse duration
  int distance = duration * 0.034/2; // Calculate distance in cm
  
  if (distance > 40) {
    lcd.setCursor(0, 0);
    lcd.print("COME CLOSER");
    lcd.setCursor(0, 1); // setCursor for line 2
    lcd.print("DISTANCE: ");
    lcd.print(distance);
    lcd.print("cm");
  } else if (distance = 40 && distance > 26) { // 
    lcd.setCursor(0, 0);
    lcd.print("PLEASE ENTER");
    lcd.setCursor(0, 1); // Corrected to setCursor for line 2
    lcd.print("DISTANCE: ");
    lcd.print(distance);
    lcd.print("cm");
    delay(1000);
    lcd.clear();

    if (distance <= 40) {
      GE1.write(120);
      delay(2000);
    } else (distance > 40); {
      GE1.write(0); // Assuming this is the default position when the distance is not >= 20
    }

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}
