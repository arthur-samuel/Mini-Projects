// Include the DHT11 library for interfacing with the sensor.
#include <DHT11.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,6);


// - For Arduino: Connect the sensor to Digital I/O Pin 2.
DHT11 dht11(2);

void setup() {
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 bps.
   
   Serial.begin(9600);
   lcd.begin(16,2);
  
}

void loop() {
    int temperature=digitalRead(2);
    int humidity=digitalRead(2);

    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    int result = dht11.readTemperatureHumidity(temperature, humidity);
    // Check the results of the readings.
   
        lcd.setCursor(0,0);
        lcd.print("Temp:");
        lcd.print(temperature);
        lcd.print("C");
        
        lcd.setCursor(0,1);
        lcd.print("Humi:");
        lcd.print(humidity);
        lcd.print("%");
        delay(1000);
        
        lcd.clear();
        delay(1000);
   
}
