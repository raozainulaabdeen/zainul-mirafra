#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct node{
	uint16_t val;
	struct node *next;
	struct node *prev;
}node_t;

node_t *head = NULL;
node_t *tail = NULL;
node_t *temp = NULL;

void add(uint16_t val);
void print_ll(void);
void r_ll(void);

void add(uint16_t val){
	if(head == NULL){
		head = (node_t *)malloc(sizeof(node_t));
		head->val = val;
		head->next = NULL;
		head->prev = NULL;
		tail = head;
	}
	else{
		temp = (node_t *)malloc(sizeof(node_t));
		temp->val = val;
		temp->next = NULL;
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
}

void print_ll(void){
	node_t *temp_p = tail;
	while(temp_p != NULL){
		printf("%d\n", temp_p->val);
		temp_p = temp_p->prev;
	}
}

void r_ll(){
	node_t *current = head, *temp_l;
	while(current != NULL){
		temp_l = current->next;
		current->next = current->prev;
		current->prev = temp_l;
		current = temp_l;
	}

	temp_l = head;
	head = tail;
	tail = head;
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
	//r_ll();
	//printf("\nAfter reverse the linked list\n");
	//print_ll();
	return 0;
}
