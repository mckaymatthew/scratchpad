#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
	uint32_t someFloatAsAnInt = 0x3F800000;
	float * someFloatAsAFloat = (float *)(&someFloatAsAnInt);
	printf("Hello, brento. As Hex: %08" PRIx32 ". As Float: %.6f\n", someFloatAsAnInt,*someFloatAsAFloat);
	/*
	
	mckaym@Lappy scratchpad % gcc brento_casto.c -o brento_casto; ./brento_casto
	Hello, brento. As Hex: 3f800000. As Float: 1.000000

	*/

}