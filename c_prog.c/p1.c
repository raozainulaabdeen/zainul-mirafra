#include <stdio.h>


int main(){
	char s[] = "MAN";

	for(int i = 0; s[i]; i++){
		printf("\n%c%c%c%c\n", s[i], *(s + i), *(i + s), i[s]);
	}
	return 0;
}
