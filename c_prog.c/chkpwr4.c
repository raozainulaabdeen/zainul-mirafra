#include <stdio.h>
#include <stdint.h>

int main(){
	uint8_t n;
	printf("Enter a Number: ");
	scanf("%hhd", &n);
	uint8_t i = 0;
	uint8_t result = 0;

	if(n & (n-1) != 0){
		printf("Not Power of 4\n");
	}

	else{
		while(result == 0){
			result = (n & (1 << i));
			if(result == 0){
				i++;
			}
		}
		
		if(i % 2 == 0){
			printf("Power of 4\n");
		}
		else{
			printf("Not Power of 4\n");
		}

	}

	return 0;
}
