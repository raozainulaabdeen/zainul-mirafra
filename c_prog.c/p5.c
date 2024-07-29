#include <stdio.h>


int main(){
	void *vptr, *v;
	extern out;
	printf("%d\n", out);
	return 0;
}

int out = 100;
