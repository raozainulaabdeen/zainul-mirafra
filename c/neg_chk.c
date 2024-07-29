#include <stdio.h>


int main(){
	int num=0;
	printf("Enter a number in hex:");
	scanf("%x", &num);

	if(num >> (8*sizeof(num)-1)){
		printf("Negative\n");
	}
	else{
		printf("Positive\n");
	}

	return 0;
}
