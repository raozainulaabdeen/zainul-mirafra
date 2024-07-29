#include <stdio.h>
#include <stdint.h>


int main(){
	int kth_bit = 6;
	uint8_t num = 0x18;  //0001 1000   
			    
	if((num & (1 << kth_bit)) != 0){    //0001 1000 & 0000 1000
		printf("bit is set\n");
	}

	else{
		printf("bit is reset\n");
	}

	return 0;
}
