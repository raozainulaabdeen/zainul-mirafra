#include <stdio.h>
#include <stdint.h>

static inline void litt_to_big_end(uint32_t *num){
	*num = ((*num & 0x000000FF) << 24) | ((*num & 0xFF000000) >> 24) | ((*num & 0x00FF0000) >> 8) | ((*num & 0x0000FF00) << 8);
}

int main(){
	int x = 0x12345678;
	litt_to_big_end(&x);
	printf("%x\n", x);
	return 0;
}
