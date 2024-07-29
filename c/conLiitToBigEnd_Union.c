#include <stdio.h>
#include <stdint.h>

typedef union _union{
	uint32_t val;
	uint8_t a[4];
}union_t;

uint32_t LittleToBig(uint32_t littleValue){
	union_t u1;
	u1.val = littleValue;
	uint32_t BigVal = (u1.a[0] << 24) | (u1.a[1] << 16) | (u1.a[2] << 8) | (u1.a[3]);
	return BigVal;
}


int main(){
	int num;
	printf("Enter a number in hex: ");
	scanf("%x", &num);

	printf("Big Endian Value is %x\n", LittleToBig(num));
	return 0;
}
