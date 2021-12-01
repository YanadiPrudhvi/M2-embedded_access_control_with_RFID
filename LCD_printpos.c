/**
 * @file LCD_printpos.c
 * @author Yanadi Prudhvi
 * @brief function to specify the position where to print text.
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
void LCD_Printpos (char row, char pos, char *str)
{
	if (row == 0 && pos<16)
	LCD_Action((pos & 0x0F)|0x80);
	else if (row == 1 && pos<16)
	LCD_Action((pos & 0x0F)|0xC0);
	LCD_Print(str);
}
