#include <stdio.h>
#include <stdint.h>

void dec_to_bin(int num, uint8_t bin[32]){
	int i = 0;
	while((num != 0) && (i < 32)){
		if(num & 1){
			bin[i] = 1;
		}
		i++;
		num = num >> 1;
	}
}

int main(){
	int num;
	uint8_t bin[32] = {0};
	printf("Enter a integer number: ");
	scanf("%d", &num);
	dec_to_bin(num, bin);

	for(int i =31; i >= 0; i--){
		printf("%d", bin[i]);
	}
	printf("\n");
	return 0;	
}
