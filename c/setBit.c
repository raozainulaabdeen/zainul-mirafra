#include <stdio.h>


static inline void setbit(int *num, int bit_pos){
	*num = *num | (1 << bit_pos);
}


int main(){
	int num = 0x12345678;
	printf("before %x\n", num);
	setbit(&num, 2);
	printf("after %x\n", num);
	return 0;
}
