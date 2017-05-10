blink.hex: blink
	avr-objcopy -j .text -j .data -O ihex blink blink.hex

blink: blink.o
	avr-gcc -o blink blink.o -mmcu=atmega8 -DF_CPU=8000000
blink.o: blink.c
	avr-gcc -c -o blink.o blink.c -mmcu=atmega8 -DF_CPU=8000000
