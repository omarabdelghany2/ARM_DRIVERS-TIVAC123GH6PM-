#ifndef GPIO_H_
#define	GPIO_H_

#include  "CONFIG.h"
#include	"REGISTERS.h"
#include 	"STD_Types.h"
#include  "BitMath.h"



/*
this enum services the Struct that will be made for each pin


*/
typedef enum  {INPUT =0x00, OUTPUT=0xFF ,ALT_FUN=0x03} GPIO_MODE ;
typedef	enum	{PORTA=0,PORTB,PORTC,PORTD,PORTE,PORTF} GPIO_PORT ;
typedef enum	{DRIVE_2mA=0x500,DRIVE_4mA=0X504,DRIVE_8mA=0x508,DRIVE_8mA_selw=0x518}GPIO_DRIVE ;/*igave them their offsets from begining to use them in setpad function*/
typedef enum  {HIGH=0xFF,LOW=0x00}GPIO_LEVEL;
typedef enum  {PULL_UP=0x510,PULL_DOW=0x514,NO_PU_PD=0,OPENDRAIN=0x50C}GPIO_PAD;


typedef struct
{
	GPIO_MODE MODE;
	uint8 pin;
	GPIO_PORT	PORT ;
	GPIO_DRIVE DRIVE;
	GPIO_PAD	PAD;
}GPIO_PIN_init_st ;


/*
functions that will be used in GPIO DRIVER
*/


void GPIOClockSet(GPIO_PORT port);
void GPIOClockRst(GPIO_PORT port);
uint8 GPIOClockGet(GPIO_PORT port);

void GPIO_configure_bus(void);
void GPIO_intialize_pin(GPIO_PIN_init_st pin_st);







uint8 GPIO_READ(GPIO_PORT port,uint8 pin);
void GPIO_WRITE(GPIO_PORT port,uint8 pin,GPIO_LEVEL data);


	




#endif


