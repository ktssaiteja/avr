#include<avr/io.h>
#include<util/delay.h>
unsigned char input;
unsigned char data=0xF0;
main()
{
  DDRD=DDRD|0xF0;
  DDRD=DDRD&0xFB;
  PORTD=PORTD|0x04;
  PORTD=PORTD&0xF0;
  while(1)
  {
    input=PIND;
    input=input&0X04;
    if(input==0)
    {
      data=data-16;
      _delay_ms(1000);
    }
  PORTD=data|0x04;
  }
}
