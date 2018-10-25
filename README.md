# Serial-Comunication-XC8-v2.0

Files Requiered for project compiling:
  * MPLAB X v5.0 or Higher.
  * XC8 v2.0 Toolchain Compiler.
  * PIC18F4550 with 20MHz crystal oscillator.
  
 Code Charateristics:
  - pinMode(char pin, char mode)
    Function Implemented and programmed to work as Arduino "pinMode" function. the pins available for configure as outputs or inputs are
    0 <= pin <= 22.
    The operation mode for the pins are:
    INPUT
    OUTPUT
    the INPUT_PULLUP is not implemented yet.
 - digitalWrite(char pin, char value)
   Function Implemented and programmed to work as Arduino "digitalWrite()" function. the pins available for configure the pin values are:
    0 <= pin <= 22.
    The operation mode for the pins are:
    HIGH
    LOW
    
  
  Disclaimer:
    - This software it was not tested yet, the user most test the software using a simulator or a physical circuit.
    
    
    
    Project made by:
    Mr. Carlos E. Tonche Vazquez.
