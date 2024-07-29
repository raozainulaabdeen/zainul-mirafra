#include <stdio.h>

typedef struct _node{
	int a;
	//struct _node *next;
	int val;
}node;


int main(){
	node n1;

	printf("size of struct var is %ld\n", sizeof(n1));
	return 0;
}
