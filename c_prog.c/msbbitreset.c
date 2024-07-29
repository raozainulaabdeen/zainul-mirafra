#include <stdio.h>

int main(){
	int num1 = 0;
	printf("Enter a Number: ");
	scanf("%d", &num1);

	int msb_bit = 0;

	int num = num1;
	while(num){
		num = num / 2;
		if(num != 0){
			msb_bit++;
		}
	}

	if((num1 & (1 << msb_bit)) != 0){
		num1 = num1 & ~(1 << msb_bit);
	}

	printf("after %d\n", num1);
	return 0;
}
