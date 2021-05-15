#ifndef _STD_TYPES_h_
#include "STD_TYPES.h"
#endif

#ifndef _BIT_MATH_h_
#include "BIT_MATH.h"
#endif

#include "WDTCR_Register.h"


void WDTCR_VidWDTCREnable(u8 Copy_U8PrescaleSelect)
{
	WDTCR = Copy_U8PrescaleSelect;
	WDTCR |= 0b00001000;
}

void WDTCR_VidWDTCRDisable()
{
	WDTCR |= 0xff;
	WDTCR = 0;
}









