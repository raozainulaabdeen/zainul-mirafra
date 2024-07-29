#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct node{
	uint16_t val;
	struct node *next;
}node_t;

node_t *head = NULL;
node_t *tail = NULL;
node_t *temp = NULL;

void add(uint16_t val);
void print_ll(void);

void add(uint16_t val){
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

void print_ll(void){
	int val = head->val;
	while(head->next != NULL){
		head = head->next;
		print_ll();
	}
	printf("%d\n", val);
}


int main(){
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	add(6);
	add(7);
	add(8);
	add(9);
	add(10);
	print_ll();
	return 0;
}
