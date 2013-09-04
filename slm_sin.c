#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141

int main()
{
	//create a 1kHz sine wave +/- 1V @ 44100Hz sample frequency
	int i = 0;
	int fs = 44100;
	float s[44100] = {}; //find out how to build float point array of size fs
	float s_sum = 0;
	float rms = 0;
	
	for(i = 0; i < fs; i++) {
		s[i] = sin(1 * (2 * pi) * i / fs);
		//printf("%f\n", s[i]);
	
		s_sum += s[i] * s[i];
	}
	
	rms = sqrt(s_sum / fs);

	printf("%f\n", rms); 

	return 0;

}
