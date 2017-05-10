#include<avr/io.h>

int main()
{
  DDRD=0X10|DDRD;
  PORTD=PORTD&0xEF;
  while(1);
}
