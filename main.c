#define F_CPU 8000000UL
#include <util/delay.h>

#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "WDTCR_Interface.h"



int main()
{
	DIO_VidSetPinDirection(PORTA, PIN0, OUTPUT);

	WDTCR_VidWDTCREnable(7);
	DIO_VidSetPinValue(PORTA, PIN0, HIGH);
	_delay_ms(1000);
	WDTCR_VidWDTCRDisable();
	DIO_VidSetPinValue(PORTA, PIN0, LOW);

	while(1)
	{

	}

	return 0;
}
