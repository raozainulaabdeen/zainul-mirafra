#include <stdio.h>

//const static int a = 20;
const static int b;

const int c;
const int d;

int main(){
	const static int a = 20;
	const int e;
	const int f = 90;

	int *p = (int *)&a;

	printf("%d %d\n", *p, a);
	*p = 100;
	printf("%d %d\n", *p, a);
	return 0;
}
