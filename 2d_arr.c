#include <stdio.h>


int main(){
	int a[2][2] = {{1, 2},{3, 4}};
	//int (*ptr)[2] = a;
	int *ptr = (int *)a;
	printf("%d\n", *++ptr);
	return 0;
}
