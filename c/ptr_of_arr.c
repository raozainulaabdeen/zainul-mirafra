#include <stdio.h>


int main(){
	int arr[4] = {1, 2, 3, 4};
	int *ptr = arr;
	printf("%d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3)); 
	
	//int arr[2][2] = {{1, 2},{3, 4}};
	//int *ptr1 = (int *)arr;
	//printf("%d %d %d %d\n", *ptr1, *(ptr1+1), *(ptr1+2), *(ptr1+3));
	
	//int (*ptr2)[2] = arr;
	//printf("%d %d %d %d\n", **ptr2, **(ptr2 + 1), **(ptr2 + 2), **(ptr2 + 3));

	return 0;
}
