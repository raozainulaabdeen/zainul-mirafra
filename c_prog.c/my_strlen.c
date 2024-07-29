#include <stdio.h>


size_t my_strlen(const char *str);


size_t my_strlen(const char *str){
	size_t len = 0;
	if(str == NULL){
		return len;
	}

	for(int i = 0; str[i] != '\0'; i++){
		len++;
	}

	return len;
}

int main(){
	char str[100];
	printf("Enter a string: ");
	scanf("%s", str);
	printf("len of the string is %ld\n", my_strlen(str));
	return 0;
}
