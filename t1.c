#include <stdio.h>


typedef struct a{
	double x;
	char y;
	int z;
}A;
typedef struct b{
	char y;
	double x;
	int z;
}B;


int main(){
	printf("A: %lu, B: %lu", sizeof(A), sizeof(B));
}
