#ifndef REGISTERS_H_
#define REGISTERS_H_


#include"CONFIG.h"
#include "STD_Types.h"



#define REG(n) *((volatile uint32*)(n))

#define AHB    1
#define APB		 0



/*

GPIO_REGSITERS
*/
/*I USED THEM IN APB BUS ALL OF THEM*/

#define GPIO_PORTA_DEN_R  				(*((volatile unsigned long *) 0x4000451C))
#define GPIO_PORTA_DIR_R  				(*((volatile unsigned long *) 0x40004400))
#define GPIO_PORTA_DATA_R 					0x40004000
#define GPIO_PORTA_DRIVE_2ma			(*((volatile unsigned long *) 0x40004500))
#define GPIO_PORTA_DRIVE_4ma			(*((volatile unsigned long *) 0x40004504))
#define GPIO_PORTA_DRIVE_8ma			(*((volatile unsigned long *) 0x40004508))
#define GPIO_PORTA_PAD_PULUP			(*((volatile unsigned long *) 0x40004510))		
#define GPIO_PORTA_PAD_PULDOWN		(*((volatile unsigned long *) 0x40004514))
#define GPIO_PORTA_PAD_NOUPDOWN		(*((volatile unsigned long *) 0x40004000))			
#define GPIO_PORTA_PAD_OPENDRAIN	(*((volatile unsigned long *) 0x4000450C))
#define GPIO_PORTA_AFSEL					(*((volatile unsigned long *) 0x40004420))
#define GPIO_PORTA_AMSEL					(*((volatile unsigned long *) 0x40004528))
#define GPIO_PORTA_PCTL			 			(*((volatile unsigned long *) 0x40004528))


#define GPIO_PORTB_DEN_R  (*((volatile unsigned long *) 		0x4000551C))
#define GPIO_PORTB_DIR_R  (*((volatile unsigned long *) 		0x40005400))
#define GPIO_PORTB_DATA_R 		0x40005000
#define GPIO_PORTB_DRIVE_2ma	(*((volatile unsigned long *) 0x40005500))
#define GPIO_PORTB_DRIVE_4ma	(*((volatile unsigned long *) 0x40005504))
#define GPIO_PORTB_DRIVE_8ma	(*((volatile unsigned long *) 0x40005508))
#define GPIO_PORTB_PAD_PULUP		(*((volatile unsigned long *) 0x40000510))
#define GPIO_PORTB_PAD_PULDOWN	(*((volatile unsigned long *) 0x40005514))
#define GPIO_PORTB_PAD_NOUPDOWN	(*((volatile unsigned long *) 0x40005000))			
#define GPIO_PORTB_PAD_OPENDRAIN	(*((volatile unsigned long *) 0x4000550C))	
#define GPIO_PORTB_AFSEL					(*((volatile unsigned long *) 0x40005420))
#define GPIO_PORTB_AMSEL					(*((volatile unsigned long *) 0x40005528))
#define GPIO_PORTB_PCTL			 			(*((volatile unsigned long *) 0x40005528))	

#define GPIO_PORTC_DEN_R  (*((volatile unsigned long *) 		0x4000651C))
#define GPIO_PORTC_DIR_R  (*((volatile unsigned long *) 		0x40006400))
#define GPIO_PORTC_DATA_R 			0x40006000
#define GPIO_PORTC_DRIVE_2ma	(*((volatile unsigned long *) 0x40006500))
#define GPIO_PORTC_DRIVE_4ma	(*((volatile unsigned long *) 0x40006504))
#define GPIO_PORTC_DRIVE_8ma	(*((volatile unsigned long *) 0x40006508))
#define GPIO_PORTC_PAD_PULUP			(*((volatile unsigned long *) 0x40006510))	
#define GPIO_PORTC_PAD_PULDOWN	(*((volatile unsigned long *) 0x40006514))
#define GPIO_PORTC_PAD_NOUPDOWN	(*((volatile unsigned long *) 0x40006000))			
#define GPIO_PORTC_PAD_OPENDRAIN	(*((volatile unsigned long *) 0x4000650C))
#define GPIO_PORTC_AFSEL					(*((volatile unsigned long *) 0x40006420))
#define GPIO_PORTC_AMSEL					(*((volatile unsigned long *) 0x40006528))
#define GPIO_PORTC_PCTL			 			(*((volatile unsigned long *) 0x40006528))	

#define GPIO_PORTD_DEN_R  (*((volatile unsigned long *)		 	0x4000751C))
#define GPIO_PORTD_DIR_R  (*((volatile unsigned long *) 		0x40007400))
#define GPIO_PORTD_DATA_R    	0x40007000
#define GPIO_PORTD_DRIVE_2ma	(*((volatile unsigned long *) 0x40007500))
#define GPIO_PORTD_DRIVE_4ma	(*((volatile unsigned long *) 0x40007504))
#define GPIO_PORTD_DRIVE_8ma	(*((volatile unsigned long *) 0x40007508))
#define GPIO_PORTD_PAD_PULUP			(*((volatile unsigned long *) 0x40007510))	
#define GPIO_PORTD_PAD_PULDOWN	(*((volatile unsigned long *) 0x40007514))
#define GPIO_PORTD_PAD_NOUPDOWN	(*((volatile unsigned long *) 0x40007000))			
#define GPIO_PORTD_PAD_OPENDRAIN	(*((volatile unsigned long *) 0x4000750C))
#define GPIO_PORTD_AFSEL					(*((volatile unsigned long *) 0x40007420))
#define GPIO_PORTD_AMSEL					(*((volatile unsigned long *) 0x40007528))
#define GPIO_PORTD_PCTL			 			(*((volatile unsigned long *) 0x40007528))	

#define GPIO_PORTE_DEN_R  (*((volatile unsigned long *) 		0x4002451C))
#define GPIO_PORTE_DIR_R  (*((volatile unsigned long *)		  0x40024400))
#define GPIO_PORTE_DATA_R 		 0x40024000
#define GPIO_PORTE_DRIVE_2ma	(*((volatile unsigned long *) 0x40024500))
#define GPIO_PORTE_DRIVE_4ma	(*((volatile unsigned long *) 0x40024504))
#define GPIO_PORTE_DRIVE_8ma	(*((volatile unsigned long *) 0x40024508))
#define GPIO_PORTE_PAD_PULUP			(*((volatile unsigned long *) 0x40024510))	
#define GPIO_PORTE_PAD_PULDOWN	(*((volatile unsigned long *) 0x40024514))
#define GPIO_PORTE_PAD_NOUPDOWN	(*((volatile unsigned long *) 0x40024000))			
#define GPIO_PORTE_PAD_OPENDRAIN	(*((volatile unsigned long *) 0x4002450C))
#define GPIO_PORTE_AFSEL					(*((volatile unsigned long *) 0x40024420))
#define GPIO_PORTE_AMSEL					(*((volatile unsigned long *) 0x40024528))
#define GPIO_PORTE_PCTL			 			(*((volatile unsigned long *) 0x40024528))	


#define GPIO_PORTF_LCK 				(*((volatile unsigned long *)	0x40025520))
#define GPIO_PORTF_COMMIT 				(*((volatile unsigned long *)	0x40025524))
#define GPIO_PORTF_MIS				(*((volatile unsigned long *)	0x40025418))	/*masked interupt status to know external interrput caused by which bit*/
#define GPIO_PORTF_ICR				(*((volatile unsigned long *)	0x4002541C))	/*interrupt clear flag this flag is rissen for the bit that has interrupt*/
#define GPIO_PORTF_IS					(*((volatile unsigned long *)	0x40025404))  /*interrupt sense*/
#define GPIO_PORTF_IBE				(*((volatile unsigned long *)	0x40025408)) 	/*INterrput both sides*/
#define GPIO_PORTF_IEV				(*((volatile unsigned long *)	0x40025408))  /*INTERRUPT  EVENT  FALLING EDGE OR RISING EDGE*/
#define GPIO_PORTF_IM				(*((volatile unsigned long *)	0x40025410))		/*INTERRUPT MASK USED TO CHOOSE THE PIN TO BE INTERRUPT*/
	


	
#define GPIO_PORTF_DEN_R 				(*((volatile unsigned long *)	0x4002551C))
#define GPIO_PORTF_DIR_R 				(*((volatile unsigned long *) 0x40025400))
#define GPIO_PORTF_DATA_R 			0x40025000
#define GPIO_PORTF_DRIVE_2ma		(*((volatile unsigned long *) 0x40025500))
#define GPIO_PORTF_DRIVE_4ma		(*((volatile unsigned long *) 0x40025504))
#define GPIO_PORTF_DRIVE_8ma		(*((volatile unsigned long *) 0x40025508))
#define GPIO_PORTF_PAD_PULUP			(*((volatile unsigned long *)0x40025510))	
#define GPIO_PORTF_PAD_PULDOWN		(*((volatile unsigned long *) 0x40025514))
#define GPIO_PORTF_PAD_NOUPDOWN		(*((volatile unsigned long *) 0x40025000))			
#define GPIO_PORTF_PAD_OPENDRAIN	(*((volatile unsigned long *) 0x4002550C))
#define GPIO_PORTF_AFSEL					(*((volatile unsigned long *) 0x40025420))
#define GPIO_PORTF_AMSEL					(*((volatile unsigned long *) 0x40025528))
#define GPIO_PORTF_PCTL			 			(*((volatile unsigned long *) 0x40025528))	



/*
////// offests of some DIO driver registers
*/

#define     GPIODATA        0x000
#define     GPIODIR         0x400
#define     GPIOAFSEL       0x420
#define     GPIODR2R        0x500
#define     GPIODR4R        0x504
#define     GPIODR8R        0x508
#define     GPIOODR         0x50C
#define     GPIOPUR         0x510
#define     GPIOPDR         0x514
#define     GPIOSLR         0x518
#define     GPIODEN         0x51C

/*


CLOCK REGISTERS

*/


#define GPIOHBCTL    (*((volatile uint32*)0x400FE06C))/*this register ti configure your bus*/
#define RCGCGPIO     (*((volatile uint32*)0x400FE608)) /*this register to enable your clock or disable it */
#define RCC          (*((volatile uint32*)0x400FE060))	 /* to choose the division in your clock  and BYPASS  AND CLOCK SOURCE */
	
/*

SYSTICK REGISTERS
*/

#define SYSTICK_BASE						0xE000E000

#define SYSTICK_CTRL						0x010
#define SYSTICK_RELOAD					0x014
#define	SYSTICK_CURRENT					0x018




/*
INTERRUPT REGISTERS
*/




/*
WatchDog timer 0 REGISTERS
*/

#define WDT0_LOAD   			(*((volatile unsigned long *)0x40000000))
#define WDT0_VALUE				(*((volatile unsigned long *)0x40000004))
#define WDT0_CTL					(*((volatile unsigned long *)0x40000008))	
#define WDT0_ICR					(*((volatile unsigned long *)0x4000000C))
#define WDT0_RIS					(*((volatile unsigned long *)0x40000010))
#define WDT0_MIS					(*((volatile unsigned long *)0x40000014))
#define WDT0_TEST					(*((volatile unsigned long *)0x40000418))
#define WDT0_LOCK					(*((volatile unsigned long *)0x40000C00))	
#define SYSCTL_RCGCWD			(*((volatile unsigned long *)0x400FE600))				
	

/*
UART0 REGSITERS

*/


#define SYSCTL_RCGCUART (*((volatile  unsigned long *) 0x400FE618)) // TJIS ENABLE CLOCK FOR THE UART0
#define UART0DATA        (*((volatile  unsigned long *) 0x4000C000)) // THIS TO SEND OR RECEIVE DATA
#define UART0CTL         (*((volatile  unsigned long *) 0x4000C030)) //CONTROL REGISTER OF UART0
#define UART0IBRD        (*((volatile  unsigned long *) 0x4000C024)) //THIS TO WIRTE IN THE INTEGER VALUE OF BAUDRATE
#define UART0FBRD        (*((volatile  unsigned long *) 0x4000C028)) //THIS IF WRITE IN THE FLOAT VALUE OF THE BAUDRATE
#define UART0LCRH        (*((volatile  unsigned long *) 0x4000C02C)) // CONFIGURTION REGISTER IN UART0		
#define UART0FR       	 (*((volatile  unsigned long *) 0x4000C018)) // FLAG REGISTER	
#endif	/* REGISTERS_H_ */
