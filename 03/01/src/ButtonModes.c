#include "ButtonModes.h"
#include <SI_EFM8BB1_Register_Enums.h>

extern char delayer;

void BTN0_set_TIMER01_0_TH0_val(BTN_MODE mode) {
  switch (mode) {
    case BTN0_MODE_5HZ :
      delayer = 0;
      while (delayer < 2) delayer++;
      TH0 = (TM0_VAL_5HZ << TH0_TH0__SHIFT);
      delayer = 0;
      break;

    case BTN0_MODE_20HZ :
      TH0 = (TM0_VAL_20HZ << TH0_TH0__SHIFT);
      break;

    case BTN0_MODE_100HZ :
      TH0 = (TM0_VAL_100HZ << TH0_TH0__SHIFT);
      break;
  }
}
