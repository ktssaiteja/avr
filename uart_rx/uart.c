#include<avr/io.h>
#include<util/delay.h>
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
  uart_init();
  while(1)
  {
    control=UCSRA;
    if(control&0x80)
    {
    data=UDR;
    data++;
    _delay_ms(1000);
    UDR=data;
    _delay_ms(1000);
    }
  }
}
