#include "APP.h"


    
void APP_init()
{
	GPIOClockSet(PORTF);
	GPIO_PIN_init_st mystruct2 ={OUTPUT,BLUE_LED,PORTF,DRIVE_8mA,NO_PU_PD};
	
	GPIO_intialize_pin(mystruct2);

}

void APP_Set_On_Off_time(float ON_delay,float OFF_delay)
{
	while(1)
	{
	GPIO_WRITE(PORTF,BLUE_LED,HIGH);
	my_delay(ON_delay);
	GPIO_WRITE(PORTF,BLUE_LED,LOW);
	my_delay(OFF_delay);

	}
}