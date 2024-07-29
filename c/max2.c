#include <stdio.h>


#define MAX2(a, b)            	(a>b?a:b)
#define MAX3(a, b, c)		((a>b && a>c)?a:(b>c?b:c))



int main(){
	int a = 10, b = 20, c = 9;

	printf("MAX(%d, %d) is %d and MAX(%d, %d, %d) is %d\n", a, b, MAX2(a, b), a, b, c, MAX3(a, b, c));
	return 0;
}
