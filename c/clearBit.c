#include <stdio.h>


static inline void clearbit(int *num, int bit_pos){
	*num = *num & ~(1 << bit_pos);
}


int main(){
	int num = 0x12345678;
	printf("before %x\n", num);
	clearbit(&num, 3);
	printf("after %x\n", num);
	return 0;
}
