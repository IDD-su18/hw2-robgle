/*
 * Dexterity puzzle text input device
 */

#include "charcode.h"

int holes[10]; // pin values
int togglePrint; // 1 if able to print
int pins[] = {0, 1, 5, 6, 9, 10, 11, 12, 13, A0};

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  setupPins();    // sets the digital pin as input to read switch
  togglePrint = 1;
}


void loop() {
  getPins();
  if (togglePrint)
    printChar();
  if (sum(holes, 10) < 2)
    togglePrint = 1;
  //printarr(holes, 10);
}

void printChar() {
  if (sum(holes, 10) == 2) {
    delay(100);
    if (sum(holes, 10) == 2) {
      int ch = getChar(holes);
      if (ch) {
        Serial.print(char(ch));
        togglePrint = 0;
        delay(2000);
      }
    }
  }
}

void setupPins() {
  int i;
  for (i = 0; i < 10; i++) {
    pinMode(pins[i], INPUT_PULLUP);
  }
}

void getPins() {
  int i;
  for (i = 0; i < 10; i++) {
    holes[i] = !digitalRead(pins[i]);
  }
}

int sum(int arr[], int len) {
  int i;
  int sum = 0 ;
  for (i = 0; i < len; i++) {
    sum += arr[i];
  }
  return sum;
}

void printarr(int arr[], int len) {
  int i;
  for (i = 0; i < len; i++) {
    Serial.print(arr[i]);
  }
  Serial.println();
}
