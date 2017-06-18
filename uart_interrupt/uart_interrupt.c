#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
unsigned char data=0x00;
volatile unsigned char count=0x0a;
ISR(USART_RXC_vect)
{
  data=UDR;
  data++;
  UDR=data;
  count--;
}
ISR(USART_TXC_vect)
{
//  data++;
  //UDR=data;
  //count--;
}
void uart_init()
{
  UBRRL=0x33;
  UBRRH=0x00;
  UCSRA=0x20;
  UCSRB=0xDA;
  UCSRC=0x86;
}
main()
{
  uart_init();
  sei();
  while(1)
  {
    if(count==0)
    cli();
  }
}
