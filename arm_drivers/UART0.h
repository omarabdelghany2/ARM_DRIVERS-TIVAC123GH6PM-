#ifndef UART0_HEADER_H
#define UART0_HEADER_H





#include "BitMath.h"
#include "STD_Types.h"
#include "GPIO.h"
#include "REGISTERS.h"



void UART0_Init();
void UART0_WRITE(uint8 sendByte);
uint8 UART0_READ();
 

#endif 