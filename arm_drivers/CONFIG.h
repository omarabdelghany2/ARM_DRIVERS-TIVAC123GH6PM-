#ifndef   CONFIG_H_
#define		CONFIG_H_



#define AHP  1
#define APB	 0
/*
	YOUR BUS CAN BE COPY FROM YOUR CHOICES 
	AHB 
	APB
	
*/


#define PORTA_BUS		APB
#define PORTB_BUS		APB
#define PORTC_BUS		APB
#define PORTD_BUS		APB
#define PORTE_BUS		APB
#define PORTF_BUS		APB


/*
clock source may be 

MOSC
PIOSC
PIOSC_4
LFIOSC
*/


#define CLOCK_SOURCE             PIOSC
#define PLL_MODE								 ENABLE
#define SYS_DIV									 SYSDIV_5




/*



WATCHDOG TIMER 0 INTERRUPT TYPE 

nonMaskableInterrupt
StdInterrupt
*/

#define WatchDogTimer0Type		StdInterrupt



/*UART0 BAUDRATE
115200
9600
*/

#define UART0_BAUDRATE			115200
#endif

 
 
 