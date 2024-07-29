#include <stdio.h>
#include <stdint.h>

int main(){
	uint8_t val = 0x23;
	printf("before %x\n", val);
	
	val = ((val >> 4) & 0x0F) | ((val << 4) & 0xF0);
	printf("after swap %x\n", val);
	return 0;
}
