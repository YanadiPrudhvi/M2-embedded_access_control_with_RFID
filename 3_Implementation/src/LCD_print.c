/**
 * @file LCD_print.c
 * @author Yanadi Prudhvi
 * @brief Function to print the text.
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "header.h"
#define LCD_Port PORTD			//Define LCD Port (PORTA, PORTB, PORTC, PORTD)
#define LCD_DPin  DDRD			//Define 4-Bit Pins (PD4-PD7 at PORT D)
#define RSPIN PD0			//RS Pin
#define ENPIN PD1 			//E Pin
int runtime;			 //Timer for LCD
void LCD_Print (char *str)
{
	int i;
	for(i=0; str[i]!=0; i++)
	{
		LCD_Port = (LCD_Port & 0x0F) | (str[i] & 0xF0);
		LCD_Port |= (1<<RSPIN);
		LCD_Port|= (1<<ENPIN);
		_delay_us(1);
		LCD_Port &= ~ (1<<ENPIN);
		_delay_us(200);
		LCD_Port = (LCD_Port & 0x0F) | (str[i] << 4);
		LCD_Port |= (1<<ENPIN);
		_delay_us(1);
		LCD_Port &= ~ (1<<ENPIN);
		_delay_ms(2);
	}
}