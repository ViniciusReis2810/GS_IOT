#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int heartRate = random(60, 101);
  int pressure = random(90, 121);

  Serial.print("Heart Rate: ");
  Serial.print(heartRate);
  Serial.print(" | Pressure: ");
  Serial.println(pressure);

  delay(1000);
}
