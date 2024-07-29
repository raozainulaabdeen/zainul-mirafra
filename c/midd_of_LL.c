#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node_t;

node_t *head;
node_t *tail;

void add(int data);
node_t *find_mid();

void add(int data){
	node_t *temp = (node_t *)malloc(sizeof(node_t));
	temp->val = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		tail = temp;
	}
	else{
		tail->next = temp;
		tail = temp;
	}
}

node_t *find_mid(){
	node_t *ptr1 = head;
	node_t *ptr2 = head;
	while((ptr2 != NULL) && (ptr2->next != NULL)){
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
	}
	return ptr1;
}


int main(){
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	add(6);
//	add(7);
	node_t *mid = find_mid();
      	printf("%d\n", mid->val);	
	return 0;
}

