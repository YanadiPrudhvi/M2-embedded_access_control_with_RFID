/**
 * @file main.c
 * @author Yanadi Prudhvi
 * @brief main function to print text in LCD
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
int main()
{
	LCD_Init(); //Activate LCD
	LCD_Print("Hello Prudhvi");	//Begin writing at Line 1, Position 1

	while(1) {
		char showruntime [16];
		itoa (runtime,showruntime,10);
		LCD_Action(0xC0);		//Go to Line 2, Position 1
		LCD_Print("RUNTIME (s): ");
		LCD_Print(showruntime);
		_delay_ms(1000);
		runtime++;
	}
}