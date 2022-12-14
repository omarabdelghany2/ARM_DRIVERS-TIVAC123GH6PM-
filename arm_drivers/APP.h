#ifndef APP_APP_H_
#define APP_APP_H_


#include "LED.h"
#include "clock.h"
#include "Timer.h"
#include "GPIO.h"

void APP_init();
void APP_Set_On_Off_time(float ON_delay,float OFF_delay);

#endif /* APP_APP_H_ */