#include <stdio.h>


int main(){
	int num = 0;
	int ctr = 0;
	int num_iter = 0;
	printf("Enter a number in hex: ");
	scanf("%x", &num);

	while(num){
		num_iter++;
		if(num & 1){
			ctr++;
		}
		num = num >> 1;
	}

	printf("number of set bits are %d found in %d iterations\n", ctr, num_iter);
	return 0;
}
