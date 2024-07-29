#include <stdio.h>
#include <stdint.h>

typedef void(*arg_type2)(void *);
typedef void* arg_type1;
#define SIZEOF(X) 	({__typeof__(X) Y; ((char *)(&Y+1) - (char *)&Y);})

int main(){
	printf("%ld  %ld  %ld\n", sizeof(arg_type1), sizeof(arg_type2), SIZEOF(arg_type1));
	int bit_num = 4;

	uint8_t num = 0x10;  //0001 0000 to 0000 0000
	printf("before clear the bit is 0x%x\n", num);


       	num = num & ~(1 << bit_num);
	printf("after clearing the %dth bit is 0x%x\n", bit_num, num);


	return 0;
}

