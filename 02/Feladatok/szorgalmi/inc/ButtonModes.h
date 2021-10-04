#ifndef __BUTTON_MODES_H__
#define __BUTTON_MODES_H__

typedef char BTN_MODE;

#define BTN0_MODE_15HZ (BTN_MODE)0
#define BTN0_MODE_20HZ (BTN_MODE)1
#define BTN0_MODE_100HZ (BTN_MODE)2


void BTN0_set_TIMER01_0_TH0_val(BTN_MODE mode);

#endif
