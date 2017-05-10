

switch.hex: switch.elf
	rm -f switch.hex
	avr-objcopy -j .text -j .data -O ihex switch.elf switch.hex

switch.o: switch.c
	avr-gcc -Wall -Os -DF_CPU=8000000 -mmcu=atmega8 -c switch.c -o switch.o

switch.elf: switch.o
	avr-gcc -Wall -Os -DF_CPU=8000000 -mmcu=atmega8 -o switch.elf switch.o

clean:
	rm -rf switch.elf switch.hex switch.o
