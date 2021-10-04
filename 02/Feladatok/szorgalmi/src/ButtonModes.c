#include "ButtonModes.h"
#include <SI_C8051F850_Register_Enums.h>

void BTN0_set_TIMER01_0_TH0_val(BTN_MODE mode) {
  switch (mode) {
    case BTN0_MODE_15HZ :
      TH0 = (0x7B << TH0_TH0__SHIFT);
      break;

    case BTN0_MODE_20HZ :
      TH0 = (0x9C << TH0_TH0__SHIFT);
      break;

    case BTN0_MODE_100HZ :
      TH0 = (0xEC << TH0_TH0__SHIFT);
      break;
  }
}
