#include "Timer.h"
#include "GPIO.h"
float overflow=0;

void my_delay(float seconds)
{
	
	seconds*=10;
	
	/*bit 1 is the enable of SYSTICK bit 2 is the INTERRUPT ENABLE AND ITS SYSTICK HANDLER*/
	REG(SYSTICK_BASE+SYSTICK_CTRL)=0X03;
	REG(SYSTICK_BASE+SYSTICK_RELOAD)=400000-1;//4M give 1 seconds so 400k GIVES 0.1 SECOND

	while(overflow<seconds)
	{
		
	}
	overflow=0;
}

void SysTick_Handler ()	
{
	overflow++;
}