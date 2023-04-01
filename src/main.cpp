#include <Arduino.h>

#define LED_GREEN 11
#define LED_RED 10
#define LED_BLUE 9
#define BRIGHTNESS 255
#define MY_INTRO "This app is created in the memory of Travis Barnes"
int animationSpeed = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  animationSpeed = 20;
  
  for(int i = 0; i <= BRIGHTNESS; i++) {
    analogWrite(LED_RED, i);
    delay(animationSpeed);
  }
  
  for(int i = BRIGHTNESS; i >= 0; i--) {
    analogWrite(LED_RED, i);
    delay(animationSpeed);
  }
  
  for(int i = 0; i <= BRIGHTNESS; i++) {
    analogWrite(LED_GREEN, i);
    delay(animationSpeed);
  }
  
  for(int i = BRIGHTNESS; i >= 0; i--) {
    analogWrite(LED_GREEN, i);
    delay(animationSpeed);
  }
  
  for(int i = 0; i <= BRIGHTNESS; i++) {
    analogWrite(LED_BLUE, i);
    delay(animationSpeed);
  }
  
  for(int i = BRIGHTNESS; i >= 0; i--) {
    analogWrite(LED_BLUE, i);
    delay(animationSpeed);
  }
}
  