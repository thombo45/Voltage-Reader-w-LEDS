# Voltage-Reader-w-LEDS
This project uses an Arduino Uno to read an analog voltage input and visually display the voltage level of a battery using a row of LEDs. As the voltage increases, more LEDs light up. When the voltage drops below 2.9 volts, all the LEDs begin to flash as a low-voltage warning.

------

Features include constant voltage readings with visal feedback and low voltage warning to prevent damage to the battery. 

------

For this project I used:

-1 Arduino Uno R3 

-4 red LEDs

-4 220Ω resistors 

-2 10kΩ resistors 

1 lithium ion battery (18650)

1 breadboard and jumperwires

------

How it works:

The analog voltage is read through an analog pin A0. The Arduino code maps the voltage range to a set number of LEDs. As voltage increases, more LEDs light up. When the input voltage drops below **2.9V**, all LEDs flash to signal low voltage

In the future I plan to add a OLED display to show real time voltege along with the LED bar graph. 
