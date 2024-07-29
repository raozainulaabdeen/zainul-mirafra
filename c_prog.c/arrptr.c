#include <stdio.h>

int main(){
	char arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

	char *ptr = (char *)arr;
	ptr = ptr + 1;	
	char (*p)[3] = &arr[0];
	p = p + 1;

	printf("%d   %d\n", **p, *ptr);
	
	return 0;
}
