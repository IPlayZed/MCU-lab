//=========================================================
// src/f2_main.c: generated by Hardware Configurator
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

#define DECODER_A P1_B1
#define DECODER_B P1_B2
#define DECODER_C P0_B4

#define DISP_OUT_ENABLE P0_B3

#define MASK 1U

#define LOW 0
#define HIGH 1

const uint16_t NUMBER = 1234;
uint8_t i = 0;

const uint8_t NUMBERS[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

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

void write_SPI0(uint8_t number) {
  //SPI0CN0_SPIF = HIGH;
  SPI0DAT = ~number;
  while(!SPI0CN0_SPIF);
  SPI0CN0_SPIF = LOW;
  DISP_OUT_ENABLE = HIGH;
  DISP_OUT_ENABLE = LOW;
}

void extractDigits(unsigned int num)
{
    uint8_t dig;
    for(i = 0; i < 4; i++)
    {
        DECODER_A = 3-i & MASK;
        DECODER_B = 3-i >> 1 & MASK;
        DECODER_C = LOW;

        dig = num%10;

        write_SPI0(NUMBERS[dig]);

        while(!TMR2CN0_TF2H);
        TMR2CN0_TF2H = LOW;

        num = num/10;


    }


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

    extractDigits(NUMBER);
  }                             
}