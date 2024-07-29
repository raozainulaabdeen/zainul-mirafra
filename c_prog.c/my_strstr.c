#include <stdio.h>
#include <string.h>
#define SIZE 100


char *my_strstr(const char *str, const char *sstr);


char *my_strstr(const char *str, const char *sstr){
	char *ptr = NULL;
	int i, j;

	if((str == NULL) || (sstr == NULL)){
		return ptr;
	}

	for(i = 0; str[i] != '\0'; i++){
		for(j = 0; sstr[j] != '\0'; j++){
			if((str[i + j] != sstr[j]) && (j < (strlen(sstr) - 1))){
				break;
			}

			else{
				continue;
			}
		}
		if(sstr[j] == '\0'){
			ptr = (char *)(str + i);
			break;
		}

		else{
			continue;
		}
	}

	return ptr;
}


int main(){
	char str[SIZE];
	char sstr[SIZE];

	printf("Enter the main string: \n");
	fgets(str, SIZE, stdin);
	
	printf("Enter the sub string: \n");
	fgets(sstr, SIZE, stdin);

	char *ptr = my_strstr(str, sstr);

	printf("Founded string is %s\n", ptr);
	return 0;
}


