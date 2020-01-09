#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int sensorPin = 0;   
int speedPin = 3;      
int motor1APin = 6 
int motor2APin = 7;
int speed_value_motor1 
int lightLevel;      
void setup() { 
  Serial.begin(9600); 
  pinMode(speedPin, OUTPUT);   
  pinMode(motor1APin, OUTPUT);    
  pinMode(motor2APin, OUTPUT);  
  pinMode(speedPin,OUTPUT);
  } 
  void loop() 
  {     
    lightLevel = analogRead(sensorPin);
    if(lightLevel>500)
    { 
    digitalWrite(motor1APin, LOW);
    digitalWrite(motor2APin, HIGH);
    delay(3000);
    }
    else if(lightLevel<300)
    {  
    digitalWrite(motor1APin, HIGH);        
    digitalWrite(motor2APin, LOW); 
    delay(3000);
    }
    else
    {
     digitalWrite(motor1APin, LOW);    
     digitalWrite(motor2APin, LOW);   
     delay(3000);
    }
    
  Serial.print("lightLevel=");
  Serial.println(lightLevel);
 
  analogWrite(speedPin,70);
  delay(2000);
  }
