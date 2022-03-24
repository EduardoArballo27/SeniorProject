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
  //Types in a simple message
  DigiKeyboard.print("Hi!");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("I am the DigiSpark Board!");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("I am capable of taking control of your computer and doing what I am told to do");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("I can do much more than type simple messages, such as doing this...");
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
  for(;;){ /*empty*/ }
}
