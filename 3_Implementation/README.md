# Folder structure

| Folder | Description                                  |
| ------ | -------------------------------------------- |
| inc    | All headers files                            |
| src    | Main source code                             |
| simulation  | All simulation files|                             |


## Manual

### Setup to run Project

-  An integrated development environment (Suggesting simulid).
-  AVR-GCC compiler to compile the project.
-  "make" to run the Makefile smoothly.

### Steps To run Project

1.  Develop the embedded system in simulid simulator.
2.  Next clone the repository from the Github.
3.  Open the files in LINUX terminal.
4.  The next step is to build the project with the help of make command :
      - make all
5.  Next step is to create .hex for the project with help of make command :
      - make exec
6.  Next go to simulide and load firmware(.hex file)into the ATmega328 microcontroller.
7.  Run the embedded system in the simulator and see its working. 
8.  Clean all executable files by the following command :
      - make clean
 
-     By using above instructions we can run the project.