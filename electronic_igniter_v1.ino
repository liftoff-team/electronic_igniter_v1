/*
 *
 * Arnlen
 * Rocket booster electronic igniter
 * Send voltage on PIN 7 on button pressing
 *
 */

#include <Arduino.h>

int buttonPin = 2;
int igniterPin = 7;
int ledPin = 8;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(igniterPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(igniterPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(igniterPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(10);
}
