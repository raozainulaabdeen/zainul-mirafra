#include <stdio.h>

static void mystrcpy(char *dest, const char *src);

int main(){
	char src[11] = "abcdefghij";
	char dest[11];

	mystrcpy(dest, src);

	printf("%s\n", dest);
	return 0;
}

static inline void mystrcpy(char *dest, const char *src){
	while((*dest++ = *src++));
}
