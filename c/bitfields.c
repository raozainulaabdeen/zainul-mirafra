#include <stdio.h>


typedef struct abc{
	char f1:1;
	char f2:7;
}abc_t;


int main(){
	abc_t abc1;
	abc1.f1 = 1;
	abc1.f2 = 0x1C;
	
	printf("Size of the struct is %ld\n", sizeof(abc1));
	printf("%x %x\n", (abc1.f1 & 1), (abc1.f2 & 0x7F));

	return 0;
}
