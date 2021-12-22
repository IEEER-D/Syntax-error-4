#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>
#include <avr/interrupt.h>

volatile int count;

	int main(void){
	DDRB =0xff;
	MCUCR |=   (1<<ISC00)|(1<<ISC01);  // make INT0 on toggle condition
	GICR |=  (1<<INT0);		//enable the interrupt 1 and 0
	sei();				//enable the external interrupts
	while(1){
		PORTB = 0x05;
	}	
}
ISR(INT0_vect){
	count++;
	if(count==5){
		PORTB = 0x0A;
		_delay_ms(500);
		count=0;
	}
}



