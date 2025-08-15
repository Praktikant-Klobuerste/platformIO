#include <Arduino.h>

// Beim ESP8266 ist die Board-LED "active LOW":
// LOW = an, HIGH = aus.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  delay(200);
  Serial.println("\nHello from WeMos D1 mini!");
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // LED an
  delay(200);
  digitalWrite(LED_BUILTIN, HIGH); // LED aus
  delay(200);
}
