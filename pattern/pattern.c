#include<avr/io.h>
#include<util/delay.h>
#define s1 0
#define s2 1
int state=s1;
unsigned char input;
main()
{
  DDRD=DDRD&0xFB;
  DDRD=DDRD|0xF0;
  PORTD=PORTD|0X04;
  while(1)
  {
    while(state==s1)
    {
    PORTD=PORTD&0xEF;
    PORTD=PORTD|0xE0;
    _delay_ms(500);
    PORTD=PORTD&0xDF;
    PORTD=PORTD|0xD0;
    _delay_ms(500);
    PORTD=PORTD&0xBF;
    PORTD=PORTD|0xB0;
    _delay_ms(500);
    PORTD=PORTD&0x7F;
    PORTD=PORTD|0x70;
    _delay_ms(500);
    input=PIND;
    input=input&0X04;
    if(input==0)
    state=s2;
    }
    while(state==s2)
    {
      PORTD=PORTD&0x0F;
      _delay_ms(1000);
      PORTD=PORTD|0xF0;
      _delay_ms(1000);
      input=PIND;
      input=input&0X04;
      if(input==0)
      state=s1;
    }
  }
}
