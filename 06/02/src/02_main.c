//=========================================================
// src/01_main.c: generated by Hardware Configurator
//
// This file will be updated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!!
//=========================================================

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_EFM8BB1_Register_Enums.h>                  // SFR declarations
#include "InitDevice.h"
// $[Generated Includes]
// [Generated Includes]$

#define OFF 1
#define ON 0

volatile int counter=0;

// DECODER defines
#define DECODER_A P1_B1
#define DECODER_B P1_B2
#define DECODER_C P0_B4

// SHIFT REGISTER defines
#define DISP_CLOCK P0_B0
#define DISP_DATA P0_B2
#define DISP_OUT_ENABLE P0_B3

uint8_t shift = 0;
uint8_t output = 0;
uint8_t bitSelector = 7;

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

void displayData (uint8_t inputData)
{
  inputData = ~inputData;
  DISP_OUT_ENABLE = 1 ;
  for(bitSelector = 0; bitSelector < 8; bitSelector++)
    {
      DISP_DATA = (inputData >> (7-bitSelector)) & 1U;
      DISP_CLOCK = OFF;
      DISP_CLOCK = ON;
    }
  DISP_OUT_ENABLE = 0;
  DISP_OUT_ENABLE = 1;
  DISP_OUT_ENABLE = 0;
}

void lamp()
{
displayData(2U);
  while(counter<10);
  counter = 0;
  displayData(4U);
  while(counter<5);
  counter = 0;
  displayData(8U);
  while(counter<10);
  counter = 0;
}
//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
int main (void){

  // Call hardware initialization routine
  enter_DefaultMode_from_RESET();
  // T5 LED select from decoder
  DECODER_A = ON;
  DECODER_B = ON;
  DECODER_C = OFF;



  while (1) 
  {
    // $[Generated Run-time code]
    // [Generated Run-time code]$
      lamp();

  }
}
