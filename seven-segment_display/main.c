/* Test program for sev_seg_api module */

#include <stdint.h>

#include "io430.h"
#include "sev_seg_api.h"

volatile uint8_t i = 0;

void delay(void) {
	for (uint16_t count = 0; count < UINT16_MAX; count++);
}

int main(void)
{
	WDTCTL = WDTPW + WDTHOLD;		/* Stop watchdog timer */
	
	SEV_SEG_init();					/* Dispaly initialization */
  
	for (;;) {						/* Endless loop */
		
		for (i; i < 0x10; i++) {    /* i = 0, 1, ... , E, F (0x10_hex = 16_dec) */
			SEV_SEG_showDigit(i);   /* Show current 'i' value on display */
			delay();
			SEV_SEG_clear();        /* Clear display (all segments are off) */
			delay();
		}
		
		for (i; i > 0; i -= 2) {      /* i = F, D, C, A, 8, ... , 2, 0 */
			SEV_SEG_showDigit(ZERO);  /* Show zero on display */
			delay();
			SEV_SEG_showDigit(FOUR);  /* Show four on display */
			delay();
			SEV_SEG_showDigit(EIGHT); /* Show eight on display */
			delay();
			SEV_SEG_showDigit(Fh);    /* Show F on display */
			delay();
			SEV_SEG_clear();          /* Clear display (all segments are off) */		
			delay();
			delay();
		}
		
	}
}
