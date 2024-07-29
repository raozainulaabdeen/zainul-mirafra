#include <stdio.h>


int main(){
	int a[2] = {0};
	if((&a[0] - &a[1]) > 0){
		printf("DOWN Stack");
	}

	else{
		printf("UP Stack");
	}
	return 0;
}
