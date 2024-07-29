#include <stdio.h>

typedef void (*arg2_type)(void *);
typedef void* arg1_type;

void fun1(arg1_type *arg1, arg2_type arg2){
	printf("I am in fun1\n");
	void *ptr;
	arg2(ptr);
}

void fun2(void *){
	printf("I am in fun2\n");

}

int main(){
	arg1_type arg1;
	arg2_type arg2 = fun2;
	fun1(&arg1, arg2);
	return 0;
}
