waveform.hex: waveform
	avr-objcopy -j .text -j .data -O ihex waveform waveform.hex

waveform: waveform.o
	avr-gcc -Os -o waveform waveform.o -mmcu=atmega8 -DF_CPU=8000000
waveform.o: waveform.c
	avr-gcc -c -Os -o waveform.o waveform.c -mmcu=atmega8 -DF_CPU=8000000
clean:
	rm -rf *.o waveform waveform.hex
