#include<avr/io.h>
#include<util/delay.h>
unsigned char data=0x32, control;
void uart_init()
{
  UBRRL=0x33;
  UBRRH=0x00;
  UCSRA=0x20;
  UCSRB=0x18;
  UCSRC=0x86;
}
void delay(int time)
{
  while(time--)
  _delay_ms(1);
}
void waveform(int on, int off)
{
  PORTD=PORTD&0x7F;
  delay(on);
  PORTD=PORTD|0x80;
  delay(off);
}

main()
{
  DDRD=DDRD|0x80;
  uart_init();
  while(1)
  {
    control=UCSRA;
    if(control&0x80)
    {
    if((UDR=='1')||(UDR=='2')||(UDR=='3'))
    data=UDR;
    }
    s1itch(data)
    {
      case '1':
      waveform(250, 750);
      UDR=0x31;
      break;
      case '2':
      waveform(500, 500);
      UDR=0x32;
      break;
      case '3':
      waveform(750, 250);
      UDR=0x33;
      break;
      default:
        UDR='D';
        break;
    }
  }
}
