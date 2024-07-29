#include <stdio.h>

static inline void func(int n1, int n2, int *add){
	*add = n1 + n2;
}


int main(){
	int add = 0;
	func(12, 13, &add);
	printf("%d\n", add);
	return 0;
}
