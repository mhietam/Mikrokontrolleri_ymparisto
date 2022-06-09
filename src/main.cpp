#include <Arduino.h>

const int ledPin = 2; //Levylle asennettu LED joka on kytketty GPIO numeroon 2
void setup() {
  // asetetaan GPIO pin2 digitaaliseksi lähdöksi
  pinMode (ledPin, OUTPUT);
}
void loop() {
  digitalWrite (ledPin, HIGH);	// LED on päällä
  delay(500);	// odotetaan 0,5 sekuntia. Aika annetaan millisekunteina
  digitalWrite (ledPin, LOW);	// LED on sammuksissa
  delay(500);	// odotetaan 0,5 sekuntia. 
  //Tämä n viimeinen rivi loop funktiosta. Rivin suorituksen jälkeen loop suoritetaan uudelleen
}