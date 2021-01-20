#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
	uint32_t someFloatAsAnInt = 0x3F800000;
	/*
	Hello, Brento. This is a quick example of turnign your "hex value" into a float in C
		float * someFloatAsAFloat
			This defines a new pointer to a float value
		(&someFloatAsAnInt)
			This takes the memory address of the integer
			This would be where your "hex value" is
		(float *)
			This "reinterperts" the memory address instead of 
			being a "pointer to uint32" into "pointer to float"			    
	*/
	float * someFloatAsAFloat = (float *)(&someFloatAsAnInt);
	printf("Hello, brento. As Hex: %08" PRIx32 ". As Float: %.6f\n", someFloatAsAnInt,*someFloatAsAFloat);
	/*
	
	mckaym@Lappy scratchpad % gcc brento_casto.c -o brento_casto; ./brento_casto
	Hello, brento. As Hex: 3f800000. As Float: 1.000000

	*/

}