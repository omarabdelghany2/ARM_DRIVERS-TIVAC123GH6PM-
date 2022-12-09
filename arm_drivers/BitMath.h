#ifndef BitMath_H_
#define BitMath_H_


#define SETBIT(reg,n)		(reg|=(1<<n))
#define CLRBIT(reg,n)   (reg &= ~(1<<n))
#define GETBIT(reg,n)		((reg>>n)&1)
#endif /* BitMath_H_ */
