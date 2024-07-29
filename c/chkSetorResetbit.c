#include <stdio.h>


static inline void setorresetbit(int num, int bit_pos){
	if((num & (1 << bit_pos)) != 0){
		printf("%d Bit is set\n", bit_pos);
	}
	else{
		printf("%d Bit is reset\n", bit_pos);
	}
}


int main(){
	int num = 0x12345678;
	setorresetbit(num, 4);
	return 0;
}
