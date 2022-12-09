#ifndef clock_H_
#define clock_H_

#include "REGISTERS.h"
#include "BitMath.h"
#include "CONFIG.h"


#define MOSC           1
#define PIOSC          2
#define PIOSC_4        3
#define LFIOSC         4

#define ENABLE          0
#define DISABLE         1

#define SYSDIV_1     0x0
#define SYSDIV_2     0x1
#define SYSDIV_3     0x2
#define SYSDIV_4     0x3
#define SYSDIV_5     0x4
#define SYSDIV_6     0x5
#define SYSDIV_7     0x6
#define SYSDIV_8     0x7
#define SYSDIV_9     0x8
#define SYSDIV_10    0x9
#define SYSDIV_11    0xA
#define SYSDIV_12    0xB
#define SYSDIV_13    0xC
#define SYSDIV_14    0xD
#define SYSDIV_15    0xE
#define SYSDIV_16    0xF

void CLOCK_voidInit(void);
#endif
