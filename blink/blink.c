#include<avr/io.h>
#include<util/delay.h>

int main()
{
  DDRD=0X10|DDRD;
  while(1)
  {
    PORTD=PORTD&0xEF;
    _delay_ms(500);
    PORTD=PORTD|0x10;
    _delay_ms(500);
  }
}
