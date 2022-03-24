//Code written and compiled by Eduardo Arballo
//Made in order to show the dangers of what a DigiSpark can do
//Missuse of this can lead to damage of device and is not recommended to altar code in any way
//NOT MEANT TO BE USED ON SCHOOL COMPUTERS
//Any damage caused by this code is due to missuse and I am not reponsible
//Strictly for educational purposes ONLY
//Created in 3-24-22
#include "DigiKeyboard.h"
#define KEY_TAB      0x2b

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  //Small delay to make sure DigiSpark is fully connected
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(0);
  //Opens up Notepad
  DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT);
  DigiKeyboard.delay(800);
  DigiKeyboard.print("Notepad");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  //Flashes LED when done
  digitalWrite(1,LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
  //DigiSpark disconnects
  for(;;){ /*empty*/ }
}
