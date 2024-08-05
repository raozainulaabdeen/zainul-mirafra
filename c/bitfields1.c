#include <stdio.h>

struct abc{
	int f1:2;
	int f2:4;
	int f3:4;
	int f4:3;
}abc1 = {2, 3, 8, 7};


int main(){
	
	printf("Size of the struct is %ld\n", sizeof(abc1));
	printf("%x %x %x %x\n", abc1.f1, abc1.f2, abc1.f3, abc1.f4);

	return 0;
}
