#include <stdio.h>
#include "src/uECC.c"

int main() {
	// 0x78dae1a22c7507a4ed30c06172e7614eb168d3546c13856340771e63ad3c0081
	uint8_t privateKey = 0;

	// 0xf94cc9053176e5b409587ebd640b31787b1db1e6db9b12ec8bd28760ab9dd9da 
	uint8_t messageHash = 0;

	// ??
	uint8_t signature = 0;

	// ??
	uint8_t curve = 0;

	int sig = uECC_sign(privateKey, messageHash, 32, signature, curve);
	
	return 0;
}