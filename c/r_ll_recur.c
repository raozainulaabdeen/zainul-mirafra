#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node_t;

node_t *head = NULL;
node_t *tail = NULL;
node_t *temp = NULL;

node_t *r_ll(node_t *root);
void a_ll(int val);
void p_ll(void);

node_t  *r_ll(node_t *root){
	if(root->next != NULL){
		r_ll(root->next);
		root->next->next = root;
		return root;
	}
	else{
		head = root;
	}	
}

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

void p_ll(void){
	node_t *ptr = head;
	while(ptr != NULL){
		printf("%d\n", ptr->val);
		ptr = ptr->next;
	}
}

int main(){
	a_ll(1);
	a_ll(2);
	a_ll(3);
	a_ll(4);
	a_ll(5);
	p_ll();
	
	temp = r_ll(head);
	temp->next = NULL;	

	p_ll();
	return 0;
}
