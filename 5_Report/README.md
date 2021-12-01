# REPORT
# Requirements
## Features
-  Connecting LCD display with ATmaga328 microcontroller.
-  Interfacing LCD using Embedded c programming.
-  Communicating with LCD.

## State of art research/Research

[ATmega328 wiki](https://en.wikipedia.org/wiki/ATmega328)

This article is about the ATMega328 and how to control it with a 16x2 character LC-Display. Everything is programmed in C with Amtel Studio. The software is loaded to the microcontroller via a programmer (AVRISP). The display is connected to PORTD with a 4-bit line.

### *How the LCD display works*
The displays available on the market are based on the HD44780 standard. This standard means that the display supports almost all characters of the ASCII character table. Therefore, it is possible to display the most important characters. The display controller, which is integrated in the display, can generate these characters and send them to the matrix. In addition to the already 208 known characters, it is also possible to draw any other characters and signs. The display controller handles most of the operations, so the code for the microcontroller is very short.
### *Wiring Shematics*
In addition to the microcontroller, a 16 MHz clock is needed, which contains a quartz oscillator with two capacitors. In addition to the display, a 10K potentiometer is needed to adjust the contrast of the LCD. The display can be controlled with 8 or 4 data lines. In this example, the display is controlled with 4-bit, as it can save 4 data lines. In addition, the display requires two more data lines (EN & RS), which are responsible for the activation and control of the display. The R / W pin is not needed and therefore connected to ground. The last two pins are used for the backlight.
### *Pinbelegung vom LCD*
|Pin|	Function|
|----|--------|
|VSS	|GND (ground)|
|VDD|	5V (positive pole)|
|V0	|Contrast setting|
|RS|	switching (0 = command, 1 = data)|
|RW	|read / write (connected to GND)|
|E|	Enable (activates display control)|
|D0 - D7|	data bits (4-bit = D0-D3, 8-bit = D0-D7)|
|A	|Anode (positive pole of LED)|
|K	|cathode (negative pole of LED)|

## Swot analysis
###  - *Strength*
-   Used in almost every embedded devises.
-   Required to show key things in embedded system
-   Low cost and easly available in market.

### -   *Weakness*
-   Some embedded devices don't need LCD display.
-   Only small amout of information can be displayed.


### - *Opportunities*
-   With Increase of IOT devices more LCD Interfacing required.
-   Can Used in different Microcontrollers. 
 
### - *Threats*
-   Intrefacing with Other display devices may leads to a threat.
-   Working in different environmental conidtions.
   
## 4W and 1H
### -   Who
-   Yanadi Prudhvi try to implement this problem statement.

### - What
-  Implementation of embedded device that communicate with LCD.

### -  Where
-   It is a embedded device implemented on ATmega328 microcontroller.

### -   How
-    This can be implemented using embedded c dumped into the microcontroller.

## Detailed requirements
### - *High level requirements*
|HLR_ID|Description|Status(Implemented/Future)|
|------|-----------|--------------------------|
|HLR_1|Connecting LCD display with ATmaga328 microcontroller|Implemented|
|HLR_2|Interfacing LCD using Embedded c programming|Implemented|
|HLR_3|Communicating with LCD|Implemented|
### - *Low level requirements*
|LLR_ID|Description|Status(Implemented/Future)|
|------|-----------|--------------------------|
|LLR_1_HLR_1| Have to connect the microcontroler ports to LCD|Implemented|
|LLR_1_HLR_2|Give directions to the Microcontroller|Implemented|
|LLR_2_HLR_2|Enable the PINs to communicate with LCD|Implemented|
|LLR_1_HLR_3|Display of text in LCD screen using src code|Implemented|

# Design:
![ATMega328_LCD_Display](https://user-images.githubusercontent.com/94187482/144220465-c306b8cf-bf92-4b53-90e0-2cb56cdc278d.png)

# Folder structure

| Folder | Description                                  |
| ------ | -------------------------------------------- |
| inc    | All headers files                            |
| src    | Main source code                             |
| simulation  | All simulation files|                             |


## Manual

### Setup to run Project

- An integrated development environment (Suggesting simulid).
- AVR-GCC compiler to compile the project.
- "make" to run the Makefile smoothly.

### Steps To run Project

1. Develop the embedded system in simulid simulator.
2. Next clone the repository from the Github.
3. Open the files in LINUX terminal.
4. The next step is to build the project with the help of make command :
   - make all
5. Next step is to create .hex for the project with help of make command :
   - make exec
6.  Next go to simulide and load firmware(.hex file)into the ATmega328 microcontroller.
7.  Run the embedded system in the simulator and see its working. 
8. Clean all executable files by the following command :
   - make clean

