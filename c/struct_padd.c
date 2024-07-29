#include <stdio.h>

#pragma pack(1)

typedef struct abc{
	int a;
	short b;
	int c;
	char d;
	char e;
	short f;
}abc_t;



int main(){
	printf("%ld\n", sizeof(abc_t));
	return 0;
}
