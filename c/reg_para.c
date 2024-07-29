#include <stdio.h>

void func(register int a, register int b);

void func(register int a, register int b){
	a = a+b;
	b = a-b;
	a = a-b;
	printf("after a = %d, b =  %d\n", a, b);
}

int main(){
	int a = 10, b = 20;
	printf("before a = %d, b =  %d\n", a, b);
	func(a, b);
	return 0;
}
