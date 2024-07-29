#include <stdio.h>


int main(){
	int num=0;
	printf("Enter a number in hex:");
	scanf("%x", &num);

	for(int i = 0, j = (8*sizeof(num) -1); i < j; i++, j--){
		if(!(num & (1 << i)) != !(num & (1 << j))){
			num = num ^ (1 << i);
			num = num ^ (1 << j);
		}
	}

	printf("after reverse %x\n", num);

	return 0;
}
