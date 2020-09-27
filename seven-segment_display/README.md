# Seven-segment display #

API for a typical 7-segment LED display component, with decimal point in a wide DIP-10 package.

```
void SEV_SEG_init();
void SEV_SEG_clear();
uint8_t SEV_SEG_showDigit(uint8_t digit);
```

As ``digit`` you can use ``ZERO``, ``ONE``, ``TWO``, ``THREE``, ``FOUR``, ``FIVE``,	``SIX``, ``SEVEN``, ``EIGHT``, ``NINE``, ``Ah``, ``Bh``, ``Ch``, ``Dh``, ``Eh``, ``Fh``.

## Examples
### #1
```
void SEV_SEG_init();
for (int i = 0; i < 0x10; i++) {          /* i = 0, 1, ... , E, F */
    SEV_SEG_showDigit(i);	          /* Show current 'i' value on display */
    delay();
}
```


###  #2
```
void SEV_SEG_init();
SEV_SEG_showDigit(Fh);    /* Show F on display */
delay();
SEV_SEG_clear();          /* Clear display (all segments are off) */	
```
