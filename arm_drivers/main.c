 
 #include"GPIO.h"
 #include"clock.h"
 
 
 


int main(void)
{
	
	
	GPIOClockSet(PORTF);
	GPIOClockSet(PORTE);
	GPIOClockSet(PORTC);
	GPIOClockSet(PORTB);
	
	GPIO_PIN_init_st mystruct ={OUTPUT,1,PORTF,DRIVE_8mA,NO_PU_PD};
	GPIO_PIN_init_st mystruct2 ={OUTPUT,2,PORTF,DRIVE_8mA,NO_PU_PD};
	GPIO_PIN_init_st mystruct3 ={OUTPUT,2,PORTB,DRIVE_8mA,NO_PU_PD};
	GPIO_PIN_init_st mystruct4 ={INPUT,4,PORTF,DRIVE_8mA,PULL_DOW};
	GPIO_PIN_init_st mystruct5 ={OUTPUT,5,PORTC,DRIVE_8mA,NO_PU_PD};
	

	GPIO_intialize_pin(mystruct);
	GPIO_intialize_pin(mystruct2);
	GPIO_intialize_pin(mystruct3);
	GPIO_intialize_pin(mystruct4);
		GPIO_intialize_pin(mystruct5);
	
	
	GPIO_WRITE(PORTC,5,HIGH);

	
	

while(1)
	{
		if(GPIO_READ(PORTF,4))
			GPIO_WRITE(PORTB,2,HIGH);
		else
				GPIO_WRITE(PORTB,2,LOW);
		
	}
	
}
