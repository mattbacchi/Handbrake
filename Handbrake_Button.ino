#include "Keyboard.h"

const int buttonPin = 2;
int buttonState = 0;
int prevButtonState = LOW;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Keyboard.begin();
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    Keyboard.press('b');  // Use the 'b' key when binding in racing sim
    delay(25);
    Keyboard.releaseAll(); // This is important after every Keyboard.press it will continue to be pressed
  }
  prevButtonState = buttonState;
}
