#include <stdio.h>


static inline void nibbleswap(unsigned char *num){
	*num =( ((*num & 0xF0) >> 4) | ((*num & 0x0F) << 4) );
}


int main(){
	unsigned char x = 0x78;
	printf("before %x\n", x);
	nibbleswap(&x);
	printf("after %x\n", x);
	return 0;
}
