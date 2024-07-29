#include <stdio.h>


int main(){
	int x = 0x00000012;
	char y = x;

	if(y == 0x12){
		printf("Litle Endian %d\n", y);
	}
	else{
		printf("Big Endian %d\n", y);
	}

	return 0;
}
