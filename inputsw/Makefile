inputsw.hex: inputsw
	avr-objcopy -j .text -j .data -O ihex inputsw inputsw.hex

inputsw: inputsw.o
	avr-gcc -Os -o inputsw inputsw.o -mmcu=atmega8 -DF_CPU=8000000
inputsw.o: inputsw.c
	avr-gcc -c -Os -o inputsw.o inputsw.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o inputsw inputsw.hex
