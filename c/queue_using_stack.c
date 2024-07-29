#include <stdio.h>
#include <stdlib.h>

typedef struct _stack{
	int data;
	struct _stack *next;
}stack_t;

stack_t *top1 = NULL;
stack_t *top2 = NULL;

void push1(int data);
void push2(int data);
int pop1();
int pop2();
void enqueue(int data);
int dequeue();
void display();

void push1(int data){
	stack_t *newNode = (stack_t *)malloc(sizeof(size_t));
	newNode->data = data;
	newNode->next = top1;
	top1 = newNode;
}
void push2(int data){
	stack_t *newNode = (stack_t *)malloc(sizeof(size_t));
	newNode->data = data;
	newNode->next = top2;
	top2 = newNode;
}

int pop1(){
	stack_t *temp = NULL;
	int pop_val;
	if(top1 == NULL){
		return -1; //-1 means stack1 is empty
	}
	else{
		pop_val = top1->data;
		temp = top1;
		top1 = top1->next;
		free(temp);
	}
	return pop_val;
}

int pop2(){
	stack_t *temp = NULL;
	int pop_val;
	if(top2 == NULL){
		return -1; //-1 means stack2 is empty
	}
	else{
		pop_val = top2->data;
		temp = top2;
		top2 = top2->next;
		free(temp);
		temp = NULL;
	}
	return pop_val;
}

void enqueue(int data){
	push1(data);
}

int dequeue(){
	int pop_val;
	if((top1 == NULL) && (top2 == NULL)){
		printf("Queue is Empty!\n");
		return -1;
	}
	else if(top2 != NULL){
		pop_val = pop2();
	}
	else{
		while(top1 != NULL){
			push2(pop1());
		}
		pop_val = pop2();
	}
	return pop_val;
}

void display(){
	stack_t *temp = NULL;
	printf("stack2 is:\n");
	for(temp = top2; temp != NULL; temp = temp->next){
		printf("%d\n", temp->data);
	}
	printf("stack1 is\n");
	for(temp = top1; temp!= NULL; temp = temp->next){
		printf("%d\n", temp->data);
	}
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display();
	dequeue();
	dequeue();
	dequeue();
	enqueue(10);
	dequeue();
	dequeue();
	dequeue();
	display();
	return 0;
}
