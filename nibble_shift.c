#include <stdio.h>
#include <stdint.h>


int main(){
	uint8_t n = 0xAF;
	printf("before 0x%x\n", n);

	n = ((n & 0xF0) >> 4) | ((n & 0x0F) << 4);

	printf("after 0x%x\n", n);

	return 0;
}

