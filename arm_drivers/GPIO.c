#include "GPIO.h"
#include "clock.h"


void GPIOClockSet(GPIO_PORT port)
{
		
    SETBIT (RCGCGPIO , port);

}

void GPIO_intialize_pin(GPIO_PIN_init_st pin_st)
{
	/*
	1)FIRST IWIL DIGITAL ENABLE THE PIN
	2)SIT THE PIN AS OUTPUT OR INPUT
	3)MAKE THE DRIVE SPEED AS WANTED
	4)MAKE THE PAD AS WANTED 
	*/
	//1)
	switch(pin_st.PORT)
	{
		case(PORTA):
		//1)
			SETBIT(GPIO_PORTA_DEN_R,pin_st.pin);
		
		//2)
		if(pin_st.MODE==OUTPUT)
			SETBIT(GPIO_PORTA_DIR_R,pin_st.pin);
		else
			CLRBIT(GPIO_PORTA_DIR_R,pin_st.pin);
		//3)
			if(pin_st.DRIVE == DRIVE_2mA)
				SETBIT(GPIO_PORTA_DRIVE_2ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_4mA)
				SETBIT(GPIO_PORTA_DRIVE_4ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_8mA)
				SETBIT(GPIO_PORTA_DRIVE_8ma,pin_st.pin);
			
			//4
			if(pin_st.PAD==PULL_UP)
				SETBIT(GPIO_PORTA_PAD_PULUP,pin_st.pin);
			else if(pin_st.PAD==PULL_DOW)
				SETBIT(GPIO_PORTA_PAD_PULDOWN	,pin_st.pin);
			else
				SETBIT(GPIO_PORTC_PAD_NOUPDOWN,pin_st.pin);
	
			break;
		case(PORTB):
		//1)	
			SETBIT(GPIO_PORTB_DEN_R,pin_st.pin);
		
		//2)
		if(pin_st.MODE==OUTPUT)
			SETBIT(GPIO_PORTB_DIR_R,pin_st.pin);
		else
			CLRBIT(GPIO_PORTB_DIR_R,pin_st.pin);
			//3)
			if(pin_st.DRIVE == DRIVE_2mA)
				SETBIT(GPIO_PORTB_DRIVE_2ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_4mA)
				SETBIT(GPIO_PORTB_DRIVE_4ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_8mA)
				SETBIT(GPIO_PORTB_DRIVE_8ma,pin_st.pin);
		//4
			if(pin_st.PAD==PULL_UP)
				SETBIT(GPIO_PORTB_PAD_PULUP,pin_st.pin);
			else if(pin_st.PAD==PULL_DOW)
				SETBIT(GPIO_PORTB_PAD_PULDOWN	,pin_st.pin);
			else
				SETBIT(GPIO_PORTB_PAD_NOUPDOWN,pin_st.pin);			
			break;
			
		
		case(PORTC):
			SETBIT(GPIO_PORTC_DEN_R,pin_st.pin);
	//2)
		if(pin_st.MODE==OUTPUT)
			SETBIT(GPIO_PORTC_DIR_R,pin_st.pin);
		else
			CLRBIT(GPIO_PORTC_DIR_R,pin_st.pin);
			//3)
			if(pin_st.DRIVE == DRIVE_2mA)
				SETBIT(GPIO_PORTC_DRIVE_2ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_4mA)
				SETBIT(GPIO_PORTC_DRIVE_4ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_8mA)
				SETBIT(GPIO_PORTC_DRIVE_8ma,pin_st.pin);
		//4
			if(pin_st.PAD==PULL_UP)
				SETBIT(GPIO_PORTC_PAD_PULUP,pin_st.pin);
			else if(pin_st.PAD==PULL_DOW)
				SETBIT(GPIO_PORTC_PAD_PULDOWN	,pin_st.pin);
			else
				SETBIT(GPIO_PORTC_PAD_NOUPDOWN,pin_st.pin);			
			break;
			
			
		case(PORTD):
			SETBIT(GPIO_PORTD_DEN_R,pin_st.pin);
		//2)
		if(pin_st.MODE==OUTPUT)
			SETBIT(GPIO_PORTD_DIR_R,pin_st.pin);
		else
			CLRBIT(GPIO_PORTD_DIR_R,pin_st.pin);
			//3)
			if(pin_st.DRIVE == DRIVE_2mA)
				SETBIT(GPIO_PORTD_DRIVE_2ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_4mA)
				SETBIT(GPIO_PORTD_DRIVE_4ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_8mA)
				SETBIT(GPIO_PORTD_DRIVE_8ma,pin_st.pin);
		//4
			if(pin_st.PAD==PULL_UP)
				SETBIT(GPIO_PORTD_PAD_PULUP,pin_st.pin);
			else if(pin_st.PAD==PULL_DOW)
				SETBIT(GPIO_PORTD_PAD_PULDOWN	,pin_st.pin);
			else
				SETBIT(GPIO_PORTD_PAD_NOUPDOWN,pin_st.pin);			
			break;
			
		case(PORTE):
			SETBIT(GPIO_PORTE_DEN_R,pin_st.pin);
		//2)
		if(pin_st.MODE==OUTPUT)
			SETBIT(GPIO_PORTE_DIR_R,pin_st.pin);
		else
			CLRBIT(GPIO_PORTE_DIR_R,pin_st.pin);
			//3)
			if(pin_st.DRIVE == DRIVE_2mA)
				SETBIT(GPIO_PORTE_DRIVE_2ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_4mA)
				SETBIT(GPIO_PORTE_DRIVE_4ma,pin_st.pin);
			
			else if(pin_st.DRIVE == DRIVE_8mA)
				SETBIT(GPIO_PORTE_DRIVE_8ma,pin_st.pin);
		//4
			if(pin_st.PAD==PULL_UP)
				SETBIT(GPIO_PORTE_PAD_PULUP,pin_st.pin);
			else if(pin_st.PAD==PULL_DOW)
				SETBIT(GPIO_PORTE_PAD_PULDOWN	,pin_st.pin);
			else
				SETBIT(GPIO_PORTE_PAD_NOUPDOWN,pin_st.pin);			
			break;
			
			
		case(PORTF):
			//1)
			SETBIT(GPIO_PORTF_DEN_R,pin_st.pin);
		//2)
		if(pin_st.MODE==OUTPUT)
			SETBIT(GPIO_PORTF_DIR_R,pin_st.pin);
		else
			CLRBIT(GPIO_PORTF_DIR_R,pin_st.pin);
			//3)
			if(pin_st.DRIVE == DRIVE_2mA)
				SETBIT(GPIO_PORTF_DRIVE_2ma,pin_st.pin);
		
			else if(pin_st.DRIVE == DRIVE_4mA)
				SETBIT(GPIO_PORTF_DRIVE_4ma,pin_st.pin);
	
			else if(pin_st.DRIVE == DRIVE_8mA)
				SETBIT(GPIO_PORTF_DRIVE_8ma,pin_st.pin);
		//4
			if(pin_st.PAD==PULL_UP)
				SETBIT(GPIO_PORTF_PAD_PULUP,pin_st.pin);
			else if(pin_st.PAD==PULL_DOW)
				SETBIT(GPIO_PORTF_PAD_PULDOWN	,pin_st.pin);
			else
				SETBIT(GPIO_PORTF_PAD_NOUPDOWN,pin_st.pin);			
			break;		
	}
}
	void GPIO_WRITE(GPIO_PORT port,uint8 pin,GPIO_LEVEL data)
	{
		uint8 OUT=HIGH;
		
		switch(port)
		{
			case(PORTA):
				
					REG(GPIO_PORTA_DATA_R+(0x00000002<<(pin+1)))=(OUT&=data);
			break;
			
			case(PORTB):
		
					REG(GPIO_PORTB_DATA_R+(0x00000002<<(pin+1)))=(OUT&=data);
			break;
			
			case(PORTC):
		
					REG(GPIO_PORTC_DATA_R+(0x00000002<<(pin+1)))=(OUT&=data);
			break;
			case(PORTD):
		
					REG(GPIO_PORTD_DATA_R+(0x00000002<<(pin+1)))=(OUT&=data);
			
			break;
			case(PORTE):
		
					REG(GPIO_PORTE_DATA_R+(0x00000002<<(pin+1)))=(OUT&=data);
			break;
			case(PORTF):
		
					REG(GPIO_PORTF_DATA_R+(0x00000002<<(pin+1)))=(OUT&=data);	
			break;
		}
	}
	
	
	
	uint8 GPIO_READ(GPIO_PORT port,uint8 pin)
	{
		uint8 value;
		switch(port)
		{
			case(PORTA):
				value=REG(GPIO_PORTA_DATA_R+0x3FC)&(1<<pin);
				break;			
			case(PORTB):
				value=REG(GPIO_PORTB_DATA_R+0x3FC)&(1<<pin);
				break;			
			case(PORTC):
				value=REG(GPIO_PORTC_DATA_R+0x3FC)&(1<<pin);
				break;			
			case(PORTD):
				value=REG(GPIO_PORTD_DATA_R+0x3FC)&(1<<pin);
				break;
			case(PORTE):
				value=REG(GPIO_PORTE_DATA_R+0x3FC)&(1<<pin);
				break;		
			case(PORTF):
				value=REG(GPIO_PORTF_DATA_R+0x3FC)&(1<<pin);
				break;
		
	}
		return(value);
}

	
	
	
	
	

