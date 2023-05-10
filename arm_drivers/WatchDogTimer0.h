#ifndef WATCHDOGTIMER0_H_

#include "REGISTERS.h"
#include "BitMath.h"
#include "GPIO.h"
#include "CONFIG.h"



void WatchDog_Init(); //intialize the watchDog timer
void WatchDog_Refresh(); //WatchDog Reneable by loading the Load registers
void WDT0_Handler();		//the interrupt handler

#define WATCHDOGTIMER0_H_

#endif