/**
 * SetPHSetPoint.h
 *
 * Handle top-level menu option
 */
#pragma once
#include "NumberCollectorState.h"

class SetPHSetPoint : public NumCollectorState {
public:
  const char *prompt() {
    return "Set pH Set Point";
  };
  int getExpectedDigits() {
    return 4;
  }
  void setValue(double value);
};
