#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *src = (char *)malloc(12);

	memset(src, 0, 12);
	strcpy(src, "ZAINULAAB");
	//char *dest = (char *)malloc(strlen(src));
	
	char *dest = src + 2;

	memmove(dest, src, 10);
	//memcpy(dest, src, 13);
	printf("%s\n", dest);
	return 0;
}
