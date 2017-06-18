#include<avr/io.h>
#include<util/delay.h>
unsigned char data=0x00;
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
    UDR=data;
    data++;
    _delay_ms(1000);
  }
}
