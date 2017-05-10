#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

uint8_t sw;


int main() {
  DDRD = (0 << 2) | (1 << 4);
  PORTD = 0 << 2;

  while (1) {
    sw = PIND;
    sw = sw & (1 << 2);
    if(sw) {
      PORTD = (1 << 4);
    } else {
      PORTD = (0 << 4);
    }
    _delay_ms(300);
  }

  return 0;
}
