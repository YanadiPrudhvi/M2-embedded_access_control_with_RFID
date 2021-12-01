all:
	avr-gcc -Wall -g -Os -mmcu=atmega328 -o test.bin LCD_action.c LCD_clean.c LCD_int.c LCD_print.c LCD_printpos.c header.h main.c
exec: all
	avr-objcopy -j .text -j .data -O ihex test.bin test.hex
clean:
	rm -rf test.hex
