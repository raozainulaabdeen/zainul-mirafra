#include <stdio.h>

int main(){
	void *v;
	int integer = 10;
	int *i = &integer;
	v = i;
	printf("%d\n", *(int *)v);
	return 0;
}
