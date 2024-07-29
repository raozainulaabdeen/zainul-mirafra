#include <stdio.h>


#define MAX(a, b, c)	( (a>b && a>c)?a:(b>c?b:c) )


int main(){
	int a = 10, b = 2, c = 20;
	printf("%d\n", MAX(a, b, c));
	return 0;
}
