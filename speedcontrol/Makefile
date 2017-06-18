speedcontrol.hex: speedcontrol
	avr-objcopy -j .text -j .data -O ihex speedcontrol speedcontrol.hex

speedcontrol: speedcontrol.o
	avr-gcc -Os -o speedcontrol speedcontrol.o -mmcu=atmega8 -DF_CPU=8000000
speedcontrol.o: speedcontrol.c
	avr-gcc -c -Os -o speedcontrol.o speedcontrol.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o speedcontrol speedcontrol.hex
