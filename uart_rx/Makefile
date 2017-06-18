uart.hex: uart
	avr-objcopy -j .text -j .data -O ihex uart uart.hex

uart: uart.o
	avr-gcc -Os -o uart uart.o -mmcu=atmega8 -DF_CPU=8000000
uart.o: uart.c
	avr-gcc -c -Os -o uart.o uart.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o uart uart.hex
