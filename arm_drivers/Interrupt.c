#include "interrupt.h"


#define ENABLE_SYSTICKBIT    1
float overflow=0;



void Enable_SYSTICK_Interrupt()
{
SETBIT(REG(SYSTICK_BASE+SYSTICK_CTRL),ENABLE_SYSTICKBIT);
}


void Disable_SYSTICK_Interrupt()
{
CLRBIT(REG(SYSTICK_BASE+SYSTICK_CTRL),ENABLE_SYSTICKBIT);
}

void SysTick_Handler ()	
{
	overflow++;
}