#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main() {
	DDRB = (1<<DDB0) | (1<<DDB1) ;          // set PB0 & PB1 as output
	
	ADMUX = (1<<MUX1) | (0<<MUX0);						//Select ADC2
	ADCSRA = (1<<ADEN) | (ADPS2);			//Set ADC2 analog pin on PB2
	
	
	while (1) {
		
		int val;
		ADCSRA = ADCSRA | (1<<ADSC);
		while (ADCSRA & (1<<ADSC));
		
		val = ADCL;
		
		if (val>70){
			
			PORTB |= (1<<PORTB0);   // drive PD1 high
			PORTB &= ~(1<<PORTB1);
			_delay_ms(12.5);         // delay 100 ms
			PORTB |= (1<<PORTB1);
			PORTB &= ~(1<<PORTB0);  // drive PD1 low
			_delay_ms(12.5);         // delay 900 ms
			
		}			
			
		}
		
	}