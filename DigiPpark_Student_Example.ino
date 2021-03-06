//Code written and compiled by Eduardo Arballo
//A simple example of a DigiSpark code safe to be used by students
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
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //Types in a simple message
  DigiKeyboard.print("Hi!");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("I am the DigiSpark Board!");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("I am capable of taking control of your computer and doing what I am told to do");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("I can do much more than type simple messages");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("But I have been adviced to keep it simple as to not damage the school computers");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Please pass me along to the next person when the light flashes");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Thank You!");
  DigiKeyboard.delay(2000);
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
