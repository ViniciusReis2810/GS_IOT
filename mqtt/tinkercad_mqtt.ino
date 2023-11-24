#include <Arduino.h>

// Configurações MQTT
const char* mqttServer = "mqtt.eclipse.org";
const int mqttPort = 1883;
const char* clientId = "tinkercad-client";
const char* topic = "heart_rate";

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Gera valores simulados
  int heartRate = random(60, 101);
  int pressure = random(90, 121);

  // Publica os dados
  Serial.println("Enviando dados para o servidor MQTT...");
  Serial.print("Heart Rate: ");
  Serial.println(heartRate);
  Serial.print("Pressure: ");
  Serial.println(pressure);

  delay(5000);
}
