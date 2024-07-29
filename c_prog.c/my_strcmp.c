#include <stdio.h>
#include <stdint.h>


uint8_t my_strcmp(const char *str1, const char *str2){

	for(int i = 0, j = 0; str1[i] && str2[i]; i++, j++){
		if(str1[i] == str2[j]){
			continue;
		}

		else{
			if(str1[i] > str2[j]){
				return 1;
			}
			else{
				return -1;
			}
		}
	}
	return 0;
}


int main(){
	char *str1 = "aabdeennn";
	char *str2 = "aabdeennnnn";
	printf("%d\n", my_strcmp(str1, str2));
	return 0;
}
