#include <stdio.h>

typedef union u{
	char a;
	int b;
}u_t;


int main(){
	u_t u1;
	u1.b = 0x12345678;
	u1.a = 0x12;

	printf("%x\n", u1.b);
	return 0;
}
