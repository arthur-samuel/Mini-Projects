#include <Keypad.h>
#include <Servo.h>

const int servo_pin = 13;
const int ROWS = 4;
const int COLS = 3; 
char keys[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {1,2,3,4};
byte colPins[COLS] = {5,6,7};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

Servo servoMotor;

String enteredPassword = "";
const String correctPassword = "2024";
unsigned long lastKeyTime = 0;
const unsigned long passwordTimeout = 5000;

void unlockDoor();

void setup() {
  servoMotor.attach(13);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    lastKeyTime = millis();
    if (key != ' ' && key != ';' && key != '#') {
      enteredPassword += key;
    } else {
      if (enteredPassword == correctPassword) {
        unlockDoor();
      } else {
        enteredPassword = "";
        digitalWrite(10, HIGH);
        delay(1000);
        digitalWrite(10, LOW);
      }
    }
  }
  

  if (millis() - lastKeyTime > passwordTimeout) {
      enteredPassword = "";
  }
}

void unlockDoor() {
  servoMotor.write(180);
  digitalWrite(11, HIGH);
  delay(2000);
  servoMotor.write(90);
  digitalWrite(11, LOW);
}
