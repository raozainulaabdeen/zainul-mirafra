#include <stdio.h>

char *my_strcpy(char *dest, const char *src);



char *my_strcpy(char *dest, const char *src){
		while(*src != '\0'){
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
		return dest;
}


int main(){
	char src[] = "my name is mirafra";
	char dest[50];// = {0};

	my_strcpy(dest, src);

	printf("%s\n", dest);
	return 0;
}

