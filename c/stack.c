#include <stdio.h>
#include <stdlib.h>

typedef struct _stack{
	int data;
	struct _stack *next;	
}stack_t;

stack_t *top = NULL;

void push(int data);
int pop(void);

void push(int data){
	stack_t *newNode = (stack_t *)malloc(sizeof(stack_t));
	newNode->data = data;
	newNode->next = top;
	top = newNode;
}

int pop(void){
	int pop_val = 0;
	stack_t *temp;
	if(top == NULL){
		printf("stack is Empty!\n");
		return -1;
	}
	else{
		pop_val = top->data;
		temp = top;
		top = top->next;
		free(temp);
		temp = NULL;
	}
	return pop_val;
}

void display(){
	for(stack_t *i = top; i != NULL; i = i->next){
		printf("%d\n", i->data);
	}
}



int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	printf("%d poped\n", pop());
	display();
	return 0;
}
