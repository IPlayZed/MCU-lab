//=========================================================
// src/szorgalmi_main.c: generated by Hardware Configurator
//
// This file will be updated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!!
//=========================================================

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_C8051F850_Register_Enums.h>                  // SFR declarations
#include "InitDevice.h"
// $[Generated Includes]
// [Generated Includes]$
#include "IncludesBasics.h"
#include "ButtonModes.h"

extern U8 counter;
// This could be volatile, but it is only read in the interrupt, so it is not
// 100% necessary.
BTN_MODE BTN0_mode = BTN0_MODE_15HZ;
//-----------------------------------------------------------------------------
// SiLabs_Startup() Routine
// ----------------------------------------------------------------------------
// This function is called immediately after reset, before the initialization
// code is run in SILABS_STARTUP.A51 (which runs before main() ). This is a
// useful place to disable the watchdog timer, which is enable by default
// and may trigger before main() in some instances.
//-----------------------------------------------------------------------------
void SiLabs_Startup (void)
{
  // $[SiLabs Startup]
  // [SiLabs Startup]$
}

//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
int main (void)
{
  // Call hardware initialization routine
  enter_DefaultMode_from_RESET();
  
  while (1) 
  {
    // $[Generated Run-time code]
    // [Generated Run-time code]$
    if (BTN0 == ON) {
        // Wait time could be changed based on button mode.
        if (BTN0_mode == BTN0_MODE_100HZ) BTN0_mode = BTN0_MODE_15HZ;
        else BTN0_mode++;
        BTN0_set_TIMER01_0_TH0_val(BTN0_mode);
    }
    counter = 0;
  }                             
}