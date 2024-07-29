#include <stdio.h>
#include <stdint.h>



int main(){
	uint8_t num = 62;

	if((num & (num -1)) == 0){
		printf("power of 2\n");
	}
	else{
		printf("Not power of 2\n");
	}

	return 0;
}
