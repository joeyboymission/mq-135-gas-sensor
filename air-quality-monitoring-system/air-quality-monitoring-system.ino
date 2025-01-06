// Include Libraries
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin Definitions
const int sensorPin = A0;
const int alarmPin = A2;
const int thresholdVal = 600; // You can adjust this value based on your sensor
const int ledPin = 13;
const int redPin = 6;
const int greenPin = 5;
const int bluePin = 3;

// Global variables and defines
int sensorData;
bool isNormal = true;

// function for Morse Code
void morseCode() {
  digitalWrite(alarmPin, HIGH);
  delay(150);
  digitalWrite(alarmPin, LOW);
  delay(450);
}

// function for Color Code
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

// Blinking Red LED
void blinkRed() {
  setColor(255, 0, 0);
  delay(350);
  setColor(0, 0, 0);
  delay(450);
}

void setup()
{  
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();   
  pinMode(sensorPin, INPUT);
  pinMode(alarmPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Display Initial Message both I2C and Serial Monitor
  // Display Initial Message on I2C LCD
  setColor(255, 255, 0);
  lcd.setCursor(0,0);
  lcd.print("Air Quality");
  lcd.setCursor(0,1);
  lcd.print("Monitoring");

  // Display Initial Message on Serial Monitor
  Serial.println("Air Quality Monitoring");
  delay(2500);
  lcd.clear();                    
}

unsigned long previousMillis = 0;
const long interval = 500;

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    sensorData = analogRead(sensorPin);

    // Status of Air Quality between Normal or Elevated
    if (sensorData > thresholdVal) {
      digitalWrite(ledPin, HIGH);
      Serial.println("Status: Not Normal!");
      lcd.setCursor(0,0);
      lcd.print("Status Not Normal!");
      lcd.setCursor(0,1);
      lcd.print("Air Quality: ");
      lcd.print(sensorData, DEC);
      morseCode();  // Will beep continuously
      blinkRed();   // Will blink continuously
      lcd.clear();
    } else {
      digitalWrite(ledPin, LOW); 
      Serial.println("Status: Normal!");
      lcd.setCursor(0,0);
      lcd.print("Status: Normal");
      lcd.setCursor(0,1);
      lcd.print("Air Quality: ");
      lcd.println(sensorData, DEC);
      setColor(0, 255, 0);  // Solid green when normal
      isNormal = true;
    }

    Serial.print("Air Quality: ");
    Serial.print(sensorData, DEC);               
    Serial.println(" PPM");
  }
}