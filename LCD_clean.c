/**
 * @file LCD_clean.c
 * @author Yanadi Prudhvi
 * @brief Function to clean LCD screen
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
void LCD_Clear()
{
	LCD_Action (0x01);		//Clear LCD
	_delay_ms(2);			//Wait to clean LCD
	LCD_Action (0x80);		//Move to Position Line 1, Position 1
}
