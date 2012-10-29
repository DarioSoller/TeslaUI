/*
 * blink.c
 *
 *  Created on: 22.09.2012
 *      Author: Dario
 */

/*Filename: blink.c */
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main (void)
{
  //Set PORTB.3 to be output (physical pin #3 on the ATTINY85)
  DDRB = 0b00001000;

  while (1) {
//    //Set PORTB.3 high
    PORTB = 0b00001000;

    _delay_ms(1000);

//    //Set PORTB.3 low again
    PORTB = 0b00000000;

    _delay_ms(1000);
  }

  return 1;
}
