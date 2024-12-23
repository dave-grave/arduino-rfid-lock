#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

int ledRed = 5; 
int ledGreen = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);

  delay(1000);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(1000);
}
