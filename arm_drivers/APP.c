#include "APP.h"



extern  float offset1; /*took from APP .c to make delay larger or smaller*/
	
extern  float offset2;	/*took from APP .c to make delay larger or smaller*/

float ON_DELAY=0;
float OFF_DELAY=0;

void APP_init()
{
	CLOCK_voidInit();
	GPIOClockSet(PORTF);
	GPIO_PORTF_LCK |= 0x4C4F434B;
	GPIO_PORTF_COMMIT |= 0x00000001;
	

	GPIO_PIN_init_st mystruct1 ={OUTPUT,BLUE_LED,PORTF,DRIVE_8mA,NO_PU_PD};
	GPIO_PIN_init_st mystruct4 ={OUTPUT,1,PORTF,DRIVE_8mA,NO_PU_PD};
	
	GPIO_PIN_init_st mystruct2 ={INPUT,0,PORTF,DRIVE_8mA,PULL_UP};
	
	GPIO_PIN_init_st mystruct3 ={INPUT,4,PORTF,DRIVE_8mA,PULL_UP};
	
	
	GPIO_intialize_pin(mystruct1);
	GPIO_intialize_pin(mystruct2);
	GPIO_intialize_pin(mystruct3);
	GPIO_intialize_pin(mystruct4);


	ENABLE_EXTERNAL_INTERRUPT_PORTF();
	
	//WatchDog_Init();
	UART0_Init();
	

}


void GPIOF_Handler ()
{
	
if(GPIO_PORTF_MIS & 0x01) /*then it cased by the first bit*/
	{
						
	ON_DELAY++;
	OFF_DELAY--;	
		
		SETBIT(GPIO_PORTF_ICR,0);
		
	}
else if(GPIO_PORTF_MIS & 0x10) /*then it cased by the four bit*/

	{
			ON_DELAY--;
			OFF_DELAY++;	
		SETBIT(GPIO_PORTF_ICR,4);
	}
	
}



void APP_Set_On_Off_time(float ON_start,float OFF_start)
{
	ON_DELAY=ON_start;
	OFF_DELAY=OFF_start;
	while(1)
	{
	/*
		GPIO_WRITE(PORTF,1,HIGH);
		my_delay(ON_DELAY);
		GPIO_WRITE(PORTF,1,LOW);
		my_delay(OFF_DELAY);
*/
	
	
	}
}

