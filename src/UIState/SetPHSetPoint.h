/**
 * SetPHSetPoint.h
 *
 * Handle top-level menu option
 */
#pragma once
#include "NumberCollectorState.h"

class SetPHSetPoint : public NumberCollectorState {
public:
  const char *prompt() {
    return "Set pH Set Point";
  };
  getExpectedDigits() {
    return 4;
  }
  void setValue(double value);
};
