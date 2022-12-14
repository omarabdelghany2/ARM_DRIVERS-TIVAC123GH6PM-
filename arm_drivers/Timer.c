#include "Timer.h"
#include "GPIO.h"

#define ENABLE_timer_bit		0

extern float overflow;// took from interrup.c as extern variable



void my_delay(float seconds)
{
	
	seconds*=10;
	
	/*bit 1 is the enable of SYSTICK bit 2 is the INTERRUPT ENABLE AND ITS SYSTICK HANDLER*/
	
	SETBIT(REG(SYSTICK_BASE+SYSTICK_CTRL),ENABLE_timer_bit); //enablie SYSTICK 
	
	Enable_SYSTICK_Interrupt(); 														 //enable  SYSTICK INTERRUPT
	
	REG(SYSTICK_BASE+SYSTICK_RELOAD)=400000-1;//4M give 1 seconds so 400k GIVES 0.1 SECOND

	while(overflow<seconds)
	{
		
	}
	overflow=0;
	
	CLRBIT(REG(SYSTICK_BASE+SYSTICK_CTRL),ENABLE_timer_bit); //DISABLE SYSTICK 
  Disable_SYSTICK_Interrupt();															//DISABLE INTERRUPT 
}	

