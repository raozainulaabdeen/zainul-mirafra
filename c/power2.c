#include <stdio.h>

int main(){
	int num = 0, count = 0;
	printf("Enter a num: ");
	scanf("%d", &num);

	if((num & (num -1)) == 0){
		printf("Power of Two\n");
		int temp = num;
		while(temp != 1){
			temp = temp >> 1;
			count++;
		}
		printf("\nnumber of power of two is %d\n", count);
	}
	else{
		printf("Not Power of Two\n");
	}
	return 0;
}
