#include <Arduino.h>
#define LED_1 12
#define LED_2 11
#define LED_3 10

#define MY_INTRO "This app is created in the memory of Travis Barnes"
int animationSpeed = 0;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void loop() {
  animationSpeed = 90;
  digitalWrite(LED_1, HIGH);
  delay(animationSpeed);
  digitalWrite(LED_1, LOW);
  delay(animationSpeed);
  digitalWrite(LED_2, HIGH);
  delay(animationSpeed);
  digitalWrite(LED_2, LOW);
  delay(animationSpeed);
  digitalWrite(LED_3, HIGH);
  delay(animationSpeed);
  digitalWrite(LED_3, LOW);
  delay(animationSpeed);
}