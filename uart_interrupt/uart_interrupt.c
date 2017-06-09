#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
unsigned char data=0x00;
ISR(UART_RX_vect)
{
  data=UDR;
  data++;
  UDR=data;
}
ISR(UART_TX_vect)
{

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
  }
}
