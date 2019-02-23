/*
Sample MIDI Controller using 1-button
Written by: Michael Sobolak
For use with an Arduino Pro Micro
Using MIDI_Controller.h from tttapa
https://github.com/tttapa/MIDI_controller

 */
#include <MIDI_Controller.h> // This lets the microcontroller speak "MIDI"

const uint8_t velocity = 0b1111111; // This sets default velocity to 100% (127 value)
const uint8_t C4 = 60; // Name the note you want to play when the button is pushed(can be anything, C3...D5...E2)
const uint8_t Csharp4 = 61;  // uncomment to use in sketch
const uint8_t D4 = 62;  // uncomment to use in sketch

Digital button1(2, C4, 1, velocity); // Format is this: button[number] (pin, note, channel, velocity)
//Digital button2(3, Csharp4, 1, velocity); // uncomment to use in sketch
//Digital button3(4, D4, 1, velocity);  //uncomment to use in sketch

Analog potentiometer1(A0, MIDI_CC::Channel_Volume, 1);
//Analog potentiometer2(A1, MIDI_CC::Pan, 1); // uncomment to use in sketch
//Analog potentiometer3(A2, MIDI_CC::Effect_Control_1, 1); // uncomment to use in sketch

void setup() {
  // put your setup code here, to run once: nothing to put here this time

}

void loop() {
  // put your main code here, to run repeatedly:
  MIDI_Controller.refresh();

}
