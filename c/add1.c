#include <stdio.h>


int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);

	num = -(~num);

	printf("num+1 = %d\n", num);
	return 0;
}
