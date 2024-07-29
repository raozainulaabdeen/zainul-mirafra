#include <stdio.h>
#include <stdbool.h>

void itoa(int num, char *str){
	bool isNegative = false;
	char temp;
	int i = 0, j;

	if(num == 0){
		str[i++] = '0';
	}

	if(num < 0){
		isNegative = true;
		num = -num;
	}
	
	while(num != 0){
		str[i++] = (num%10)+'0';
		num = num/10;
	}
	if(isNegative){
		str[i++] = '-';
	}
	str[i] = '\0';

	for(j = i -1, i = 0; i < j; i++, j--){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}


int main(){
	int a;
	printf("Enter a num: ");
	scanf("%d", &a);

	char str[100];
	
	itoa(a, str);

	printf("%s\n", str);

	return 0;
}
