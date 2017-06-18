#include<avr/io.h>
#include<util/delay.h>
unsigned char inputl, inputr;
int i, del=50;
main()
{
  DDRD=DDRD&0xF3;
  DDRD=DDRD|0xF0;
  PORTD=PORTD|0X0C;
  while(1)
  {
  PORTD=PORTD&0xEF;
  PORTD=PORTD|0xE0;
  for(i=0; i<del; i++)
  _delay_ms(10);
  inputl=PIND;
  inputr=PIND;
  inputr=inputr&0X04;
  inputl=inputl&0X08;
  if(inputr==0&&del>=2)
  del=del/2;
  else if(inputl==0)
  del=del*2;
  PORTD=PORTD&0xDF;
  PORTD=PORTD|0xD0;
  for(i=0; i<del; i++)
  _delay_ms(10);
  inputl=PIND;
  inputr=PIND;
  inputr=inputr&0X04;
  inputl=inputl&0X08;
  if(inputr==0&&del>=2)
  del=del/2;
  else if(inputl==0)
  del=del*2;
  PORTD=PORTD&0xBF;
  PORTD=PORTD|0xB0;
  for(i=0; i<del; i++)
  _delay_ms(10);
  inputl=PIND;
  inputr=PIND;
  inputr=inputr&0X04;
  inputl=inputl&0X08;
  if(inputr==0&&del>=2)
  del=del/2;
  else if(inputl==0)
  del=del*2;
  PORTD=PORTD&0x7F;
  PORTD=PORTD|0x70;
  for(i=0; i<del; i++)
  _delay_ms(10);
  inputl=PIND;
  inputr=PIND;
  inputr=inputr&0X04;
  inputl=inputl&0X08;
  if(inputr==0&&del>=2)
  del=del/2;
  else if(inputl==0)
  del=del*2;
  }
}
