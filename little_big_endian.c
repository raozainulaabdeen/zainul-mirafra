#include <stdio.h>
#include <stdint.h>


int main(){
	uint16_t b = 0x0010;
	char a = (char)b;

	if(a == 0x10){
		printf("little endian\n");
	}

	else{
		printf("big endian\n");
	}

	return 0;
}
