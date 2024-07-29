#include <stdio.h>


int main(){
	int num = 0;
	int ctr = 0;
	int num_iter = 0;
	printf("Enter a number in hex: ");
	scanf("%x", &num);

	while(num){
		num_iter++;
		num = num & (num - 1);  //clears the least significat set bit
		ctr++;
	}

	printf("number of set bits are %d found in %d iterations\n", ctr, num_iter);
	return 0;
}
