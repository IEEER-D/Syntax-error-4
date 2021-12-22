#include <avr/io.h>
#define F_CPU 8000000

int main(void){
	DDRB = 0xff;
	
	ADMUX |= (1<<REFS0); //VCC is ref
	ADMUX |= 0b00000111; //channel seven

	ADCSRA |= (1<<ADEN); //enable ADC
	ADCSRA |= (1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2); //pr-scale 128
	while(1){
		ADCSRA |= (1<<ADSC); //start conversion
		while(ADCSRA & (1<<ADSC)); // hold till the conversion ends
		if ((ADC > 0) & ADC <= 200)
			PORTB = 0x05;
		else if ((ADC > 200) & ADC <= 400)
			PORTB =0x5A;
		else if ((ADC > 400) & ADC <= 600)
			PORTB |= 0xA5;
		else if ((ADC > 600) & ADC <= 1023)
			PORTB =0xFA;
		else
			PORTB |= 0xAA;
			
	}
}
