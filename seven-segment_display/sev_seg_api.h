#ifndef SEVEN_SEG_H_SENTRY_
#define SEVEN_SEG_H_SENTRY_

#include <stdint.h>
#include "io430.h"

enum digits {
	ZERO = 0,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	Ah,
	Bh,
	Ch,
	Dh,
	Eh,
	Fh,
};

void SEV_SEG_init();
void SEV_SEG_clear();

uint8_t SEV_SEG_showDigit(uint8_t digit);

#endif /* SEVEN_SEG_H_SENTRY_ */
	