uart_interrupt.hex: uart_interrupt
	avr-objcopy -j .text -j .data -O ihex uart_interrupt uart_interrupt.hex

uart_interrupt: uart_interrupt.o
	avr-gcc -Os -o uart_interrupt uart_interrupt.o -mmcu=atmega8 -DF_CPU=8000000
uart_interrupt.o: uart_interrupt.c
	avr-gcc -c -Os -o uart_interrupt.o uart_interrupt.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o uart_interrupt uart_interrupt.hex
