#include <stdio.h>
#include <stdint.h>


int main(){
	int bit_num = 0;

	uint8_t num = 0x10;  //0001 0000 to 0001 0001
	printf("before set the bit is 0x%x\n", num);


       	num = num | (1 << bit_num);
	printf("after setting the %dth bit is 0x%x\n", bit_num, num);


	return 0;
}

