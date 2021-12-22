
#include <avr/io.h>

int main(void){
TCCR0 |= (1<<WGM00) | (1<<WGM01);

TCCR0 |= (1<<COM01);

TCCR0 |= (1<<CS00)| (1<<CS02);

OCR0 = 10;

DDRA = 0xff;
PORTA = 0x05;


}