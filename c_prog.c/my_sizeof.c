#include <stdio.h>

#define my_sizeof(type)  ((&type + 1) - &type)
int main(){
	double c;
	float d;
	long e;
	short f;
	int a;
	char b;
	printf("double =  %ld, float =  %ld, long = %ld, short = %ld, int = %ld, char = %ld\n", my_sizeof(c), my_sizeof(d), my_sizeof(e), my_sizeof(f), my_sizeof(a), my_sizeof(b));
	return 0;
}
