/**
 * SetPHSetPoint.cpp
 */

#include "SetPHSetPoint.h"

#include "../Devices/EEPROM_TC.h"
#include "MainMenu.h"

void SetPHSetPoint::setValue(double value) {
  EEPROM_TC::instance()->setPH(value);
  // update set_point for PID. WIP waiting for PID_TC

  char message[16];
  sprintf(message, "New PH=%.3f", value);
  LiquidCrystal_TC::instance()->writeLine(message, 1);
  delay(1000);  // one second

  this->changeState((UIState *)new MainMenu);
}
