#include <stdio.h>

int main(){
	int num = 0, cnt = 0;
	printf("Enter a num: ");
	scanf("%d", &num);

	if((num & (num -1)) != 0){
		printf("Not Power of Four\n");
		return 0;
	}
	while((num & 1) == 0 ){
		num = num >> 1;
		cnt++;
	}
	
	if((cnt % 2) == 0){
		printf("Power of Four\n");
	}
	else{
		printf("Not Power of Four\n");
	}
	return 0;
}
