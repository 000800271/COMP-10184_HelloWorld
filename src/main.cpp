#include <Arduino.h>

/*
I, Mychaylo Tatarynov, student number 000800271, certify that all code submitted is my own work; 
that I have not copied it from any other source. 
I also certify that I have not allowed my work to be copied by others.

2022/09/12
*/

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nName: Mychaylo Tatarynov (000800271)");
  Serial.println("ESP8266 Chip Id: " + String(ESP.getChipId()));
  Serial.println("Flash Chip Id: " + String(ESP.getFlashChipId()) + "\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Time: " + String(millis()) + "ms");
  delay(2000);
}