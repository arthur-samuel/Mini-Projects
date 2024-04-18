


const int echoPin = 4; // EchoPIN
const int triggerPin = 5; // TriggerPin

//Siemens Grp4 Ultrasonic Sensor Project
// USM works by emitting an utrasonic wave from the sensor head
// and receives the reflected wave back from the target object.
//measures distance from two cm to 400cm, with an accuracy of about 3mm raised
//module includes U-transmitter,receiver & a control circuit(D=txspeed of sound/2)
//to send wave, trigger pin is set high for a min of 10ms
//echo pin input the distace travelled ie trigger pin sends wave and echo pin receives it
                    
void setup() 
{
  Serial.begin(9600); // baud rate of 9600 means the v-terminal would work at 9600 display per second
  pinMode(5, OUTPUT); // starting 5 as output
  pinMode(4, INPUT); // and pin 4 as input

}

void loop()
{
  long duration, inches, cm;
  
  digitalWrite(5, LOW);
  delay(3000);
  
  digitalWrite(5, HIGH);
  delay(200);  //printing distance per 2 microsec
  
  digitalWrite(5, LOW);
  

  
  duration = pulseIn(4, HIGH); // using pulsin function to determine total time
  inches = microsecondsToInches(duration); // calling method for inches
  cm = microsecondsToCentimeters(duration); // calling method for cm
  
  Serial.print(inches);// telling the serial v-terminal to print in(for inches) & cm(for centimeters)
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
}

// DISTANCE CALC. METHOD

long microsecondsToInches(long microseconds) // method to covert microsec to inches 
{
 return microseconds / 74 / 2; // sound travels 340 second per meter, thus, 29.412microseconds per centimeter 
                               // hence approx 29/2 and 74/2 for converting the microsec to cm and inches resp.
                               //since we measuring only the time by speed of sound btwn the trigPin and target
}

long microsecondsToCentimeters(long microseconds) // method to covert microsec to centimeters
{
   return microseconds / 29 / 2;
}
