#include "sev_seg_api.h"

enum basic_codes {
	ALL_CODE   = 0xFF,
	NONE_CODE  = 0x00,
};

enum digit_codes {
	ZERO_CODE  = 0x3F,
	ONE_CODE   = 0x06,
	TWO_CODE   = 0x5B,
	THREE_CODE = 0x4F,
	FOUR_CODE  = 0x66,
	FIVE_CODE  = 0x6D,
	SIX_CODE   = 0x7D,
	SEVEN_CODE = 0x07,
	EIGHT_CODE = 0x7F,
	NINE_CODE  = 0x6F,
	Ah_CODE    = 0x77,
	Bh_CODE    = 0x7C,
	Ch_CODE    = 0x39,
	Dh_CODE    = 0x5E,
	Eh_CODE    = 0x79,	
	Fh_CODE    = 0x71,
};

void SEV_SEG_init()
{
	P1DIR = 0xFF;
	P1OUT = ALL_CODE;
}

uint8_t SEV_SEG_showDigit(uint8_t digit)
{
	switch (digit) {
		case ZERO:
			P1OUT = ZERO_CODE;
			break;
		case ONE:
			P1OUT = ONE_CODE;
			break;	
		case TWO:
			P1OUT = TWO_CODE;
			break;
		case THREE:
			P1OUT = THREE_CODE;
			break;
		case FOUR:
			P1OUT = FOUR_CODE;
			break;
		case FIVE:
			P1OUT = FIVE_CODE;
			break;
		case SIX:
			P1OUT = SIX_CODE;
			break;
		case SEVEN:
			P1OUT = SEVEN_CODE;
			break;
		case EIGHT:
			P1OUT = EIGHT_CODE;
			break;
		case NINE:
			P1OUT = NINE_CODE;
			break;
		case Ah:
			P1OUT = Ah_CODE;
			break;
		case Bh:
			P1OUT = Bh_CODE;
			break;
		case Ch:
			P1OUT = Ch_CODE;
			break;
		case Dh:
			P1OUT = Dh_CODE;
			break;
		case Eh:
			P1OUT = Eh_CODE;
			break;
		case Fh:
			P1OUT = Fh_CODE;
			break;
		default:
			P1OUT = NONE_CODE;
			return 1;
	}
	return 0;
}

void SEV_SEG_clear()
{
 	P1OUT = NONE_CODE;
}
