/*	Author: kma023
 *  Partner(s) Name: none
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;

    unsigned char cntavail = 0x00;
    unsigned char one = 0x00;
    unsigned char two = 0x00;
    unsigned char three = 0x00;
    unsigned char four = 0x00;

    /* Insert your solution below */
    while (1)
    {
	one = PINA & 0x01;
	two = PINA & 0x02;
	three = PINA & 0x04;
        four = PINA & 0x08;

	two = two >> 1;
        three = three >> 2;
        four = four >> 3;
	
	cntavail = one + two + three + four;
	cntavail = 0x04 - cntavail;
	PORTC = cntavail;
    }
    return 1;
}
