dice.hex: dice
	avr-objcopy -j .text -j .data -O ihex dice dice.hex

dice: dice.o
	avr-gcc -Os -o dice dice.o -mmcu=atmega8 -DF_CPU=8000000
dice.o: dice.c
	avr-gcc -c -Os -o dice.o dice.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o dice dice.hex
