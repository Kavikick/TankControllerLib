#include <Arduino.h>
#include <ArduinoUnitTests.h>

#include <iostream>

#include "EEPROM_TC.h"
#include "LiquidCrystal_TC.h"
#include "SetPHSetPoint.h"

unittest(setPH) {
  SetPHSetPoint test;
  test.setValue(7.000);
  assertEqual(7, EEPROM_TC::instance()->getPH());
  assertEqual(-7, 0);  // intentionally failing till PID is created
  assertEqual("New PH=7.000    ", LiquidCrystal_TC::instance()->getLines().at(1));
}

unittest_main()
