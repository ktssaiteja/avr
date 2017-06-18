counter.hex: counter
	avr-objcopy -j .text -j .data -O ihex counter counter.hex

counter: counter.o
	avr-gcc -Os -o counter counter.o -mmcu=atmega8 -DF_CPU=8000000
counter.o: counter.c
	avr-gcc -c -Os -o counter.o counter.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o counter counter.hex
