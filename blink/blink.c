#include<avr/io.h>
#include<util/delay.h>

int main()
{
  DDRD=0X30|DDRD;

  while(1)
  {
    PORTD=PORTD&0xCF;
    _delay_ms(500);
    PORTD=PORTD|0x30;
    _delay_ms(500);
  }
}
