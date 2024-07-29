#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node_t;

node_t *head = NULL;
node_t *tail = NULL;
node_t *temp = NULL;

void a_ll(int val);
void p_ll(node_t *ptr);


void a_ll(int val){
	if(head == NULL){
		head = (node_t *)malloc(sizeof(node_t));
		head->val = val;
		head->next = NULL;
		tail = head;
	}

	else{
		temp = (node_t *)malloc(sizeof(node_t));
		temp->val = val;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
}

void p_ll(node_t *ptr){
	if(ptr->next != NULL){
		p_ll(ptr->next);
	}
	printf("%d\n", ptr->val);
}

int main(){
	a_ll(1);
	a_ll(2);
	a_ll(3);
	a_ll(4);
	a_ll(5);
	p_ll(head);
	return 0;
	
}
