#ifndef __BUTTON_MODES_H__
#define __BUTTON_MODES_H__

#include "IncludesBasics.h"

typedef char BTN_MODE;
typedef unsigned char uchar;

#define BTN0_MODE_5HZ (BTN_MODE)0
#define BTN0_MODE_20HZ (BTN_MODE)1
#define BTN0_MODE_100HZ (BTN_MODE)2

#define TM0_VAL_5HZ (uchar)0x39
#define TM0_VAL_20HZ (uchar)0x9C
#define TM0_VAL_100HZ (uchar)0xEC

#define RATTLE_COUNTER_5HZ (uint8_t)5
#define RATTLE_COUNTER_20HZ (uint8_t)5*(TM0_VAL_20HZ/TM0_VAL_5HZ)
#define RATTLE_COUNTER_100HZ (uint8_t)5*(TM0_VAL_100HZ/TM0_VAL_20HZ)

void BTN0_set_TIMER01_0_TH0_val(BTN_MODE mode);

#endif
