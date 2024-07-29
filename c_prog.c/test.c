#include <stdio.h>

#define MAX 10


int g = 20;
static int sgl = 100;



int main(){
	static int sgl = 20;
	int l = 50;
	int la[1] = {1000};
#ifdef MAX
	l = l + MAX;
#else
	l = l - MAX;
#endif
	return 0;
}
