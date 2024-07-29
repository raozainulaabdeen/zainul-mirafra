#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node *next;
}node_t;

node_t *front = NULL;
node_t *rear = NULL;


void enqueue(int data);
int dequeue();
void display();

void enqueue(int data){
	node_t *newNode = NULL;
	if(front == NULL){
		newNode = (node_t *)malloc(sizeof(size_t));
		newNode->data = data;
		newNode->next = NULL;
		front = newNode;
		rear = newNode;
	}
	else{
		newNode = (node_t *)malloc(sizeof(size_t));
	        newNode->data = data;
                newNode->next = NULL;
		rear->next = newNode;
		rear = newNode;
	}
}


int dequeue(){
	int dequeue_val = -1;
	node_t *temp;
	if(front == NULL){
		printf("queue is Empty!");
		return -1;
	}
	else{
		dequeue_val = front->data;
		temp = front;
		front = front->next;
		free(temp);
		temp = NULL;
	}
	return dequeue_val;
}

void display(){
	for(node_t *i = front; i != NULL; i = i->next){
		printf("%d\n",i->data);
	}
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display();
	printf("After dequeue the elements %d, %d and %d:\n", dequeue(), dequeue(), dequeue());
	display();
	return 0;
}
