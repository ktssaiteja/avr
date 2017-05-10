

blinky.hex: blinky.elf
	rm -f blinky.hex
	avr-objcopy -j .text -j .data -O ihex blinky.elf blinky.hex

blinky.o: blinky.c
	avr-gcc -Wall -Os -DF_CPU=8000000 -mmcu=atmega8 -c blinky.c -o blinky.o

blinky.elf: blinky.o
	avr-gcc -Wall -Os -DF_CPU=8000000 -mmcu=atmega8 -o blinky.elf blinky.o

clean:
	rm -rf blinky.elf blinky.hex blinky.o
