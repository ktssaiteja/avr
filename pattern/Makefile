pattern.hex: pattern
	avr-objcopy -j .text -j .data -O ihex pattern pattern.hex

pattern: pattern.o
	avr-gcc -Os -o pattern pattern.o -mmcu=atmega8 -DF_CPU=8000000
pattern.o: pattern.c
	avr-gcc -c -Os -o pattern.o pattern.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o pattern pattern.hex
