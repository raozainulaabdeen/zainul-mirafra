#include <stdio.h>

int main(){
	int a = 13;
	int no_setbits = 0;
	while(a != 0){
		a = a & (a-1);   //1101 & 1100 = 1100 & 1011 = 1000 & 0111 = 0000
		no_setbits += 1; 
	}

	printf("number of count bits is %d\n", no_setbits);

	return 0;
}
