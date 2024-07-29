#include <stdio.h>

enum days{Monday = 1, Tuesday};

int main(){
	enum days day = Monday;
	printf("%d\n", day);
	return 0;
}
