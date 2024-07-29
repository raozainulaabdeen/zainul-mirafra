#include <stdio.h>
#include <string.h>

char *my_strstr(char *str, char *sstr){
	char *rstr = NULL;
	int i, j;
	int str_len = strlen(str);
	int sstr_len = strlen(sstr);


	for(i = 0; i <= (str_len - sstr_len); i++){
		for(j = 0; j < sstr_len; j++){
			if(sstr[j] != str[i+j]){
				break;
			}
		}
		if(j == sstr_len){
			printf("substring is found at the index %d\n", i);
			rstr = &str[i];
			break;
		}
	}

	return rstr;
}


int main(){
	char str[100];
	char sstr[100];
	printf("Enter the string: ");
	fgets(str, 100, stdin);
	printf("Enter the sub string: ");
	fgets(sstr, 100, stdin);

	char *rstr = my_strstr(str, sstr);
	printf("string found is %s\n", rstr);
	return 0;
}
