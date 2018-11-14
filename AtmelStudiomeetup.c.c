/*
 * AtmelStudiomeetup.c
 *
 * Created: 14.11.2018. 23:53:42
 * Author : Zoran V
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB |= (1 << PB5); //definiranje izlaznog pina PB5
	
    while (1) 
    {
		PORTB |= (1 << PB5);  // uklju?i pin PB5
		_delay_ms(100);       // pri?ekaj 100 ms                
		PORTB &= ~(1 << PB5); // isklju?i pin PB5
		_delay_ms(100);       // pri?ekaj 100 ms                                
    }
}

