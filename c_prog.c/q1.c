#include <stdio.h>
#define FUNC(a1,a2,a3)   a1 a2 a3


int main(){
	int p[] = {3, 7, 27};
	int *ptr = &p[0];

	printf("%d %d %d %s\n", *++ptr, *ptr++, ++*ptr, FUNC("1234", "my", "name"));

	return 0;
}
