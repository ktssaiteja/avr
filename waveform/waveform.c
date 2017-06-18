#include<avr/io.h>
#include<util/delay.h>
#define s1 1
#define s2 2
#define s3 3
unsigned char data=0x00, control;
void uart_init()
{
  UBRRL=0x33;
  UBRRH=0x00;
  UCSRA=0x20;
  UCSRB=0x18;
  UCSRC=0x86;
}
main()
{
  DDRD=DDRD|0x80;
  int state=0;
  uart_init();
  while(1)
  {
    control=UCSRA;
    if(control&0x80)
    {
    data=UDR;
    if(data=='1')
    state=s1;
    else if(data=='2')
    state=s2;
    else if(data=='3')
    state=s3;
    if(data=='.')
    break;
    }
    if(state==s1)
    {
      PORTD=PORTD&0x7F;
      _delay_ms(250);
      PORTD=PORTD|0x80;
      _delay_ms(750);
    }
    if(state==s2)
    {
      PORTD=PORTD&0x7F;
      _delay_ms(500);
      PORTD=PORTD|0x80;
      _delay_ms(500);
    }
    if(state==s3)
    {
      PORTD=PORTD&0x7F;
      _delay_ms(750);
      PORTD=PORTD|0x80;
      _delay_ms(250);
    }
  }
}
