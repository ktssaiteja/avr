#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 1 << 4;

    while (1) {
      PORTD = 1 << 4;
      _delay_ms(500);
      PORTD = 0 << 4;
      _delay_ms(500);
     }
    return 0;
}
