#include <stdio.h>


int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", n);
	return 0;
}
