#include <stdio.h>

void fun(void){
	printf("goto is working\n");
}

int main(){
	goto here;

here:
	fun();
	main();
	return 0;
}
