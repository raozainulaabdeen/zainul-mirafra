#include <stdio.h>
#include <stdint.h>


int main(){
	uint64_t c = 0x1234567890123456;
	c = (c << 32) | (c >> 32);
	printf("%lx\n",c);
	return 0;
}
