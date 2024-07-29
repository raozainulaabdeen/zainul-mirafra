#include <stdio.h>

int main(){
	char *str = "1a2b3c4d5e6fghh7mnjk8lo910";

	long int n = 0;

	while(*str){
		if((*str >= '0' && *str <= '9')){
			n = (n * 10 + (*str - '0'));
		}
	       str++;	
	}

	printf("%ld\n", n);
}
