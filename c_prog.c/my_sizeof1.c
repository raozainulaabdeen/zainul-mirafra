#include<stdio.h>
void main()
{
	int x=0;

	fun(&x);
}
void fun(void *ptr){
	printf("%d\n",++ptr);
}
