#include <stdio.h>

int main(){
	int a = 1, b = 2, c = 3, d = 4;

	int *ptr[4] = {&a, &b, &c, &d};

	printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
	return 0;
}
