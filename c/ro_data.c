#include <stdio.h>

char *p = "hello";

int main(){
	char *q = "world";
	printf("%s   %s\n", p, q);
	p[0] = 'm';
	q[0] = 'n';
	printf("%s   %s\n", p, q);
	return 0;
}
