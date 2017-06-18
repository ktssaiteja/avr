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


void waveform(double on, double off)
{
  PORTD=PORTD&0x7F;
  _delay_ms(on);
  PORTD=PORTD|0x80;
  _delay_ms(off);
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
    if((UDR=='1')||(UDR=='2')||(UDR=='3'))
    data=UDR;
    }
    switch(data)
    {
      case '1':
      waveform(250.0, 750.0);
      break;
      case '2':
      waveform(500.0, 500.0);
      break;
      case '3':
      waveform(750.0, 250.0);
      break;
    }
  }

}
