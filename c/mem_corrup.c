#include <stdio.h>

typedef struct node{
	int val[2];
	int j;
}node_t;

int main(){
	node_t node;
	node.j = 5;
	node.val[2] = 3;        //index overflow
	printf("%d\n", node.j);
	return 0;
}
