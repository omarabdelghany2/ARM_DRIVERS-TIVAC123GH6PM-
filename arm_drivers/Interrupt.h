#ifndef INTERRUPT_H_
#define INTERRUPT_H_


#include "REGISTERS.h"
#include "BitMath.h"


void SysTick_Handler ();	
void Enable_SYSTICK_Interrupt();
void Disable_SYSTICK_Interrupt();
#endif /* INTERRUPT_H_ */