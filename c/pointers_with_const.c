#include <stdio.h>


int main(){
	int a;
	int *ptr = &a;
	const int *ptr1 = &a;
	int *const ptr2 = &a;
	const int *const ptr3 = &a;
	//(*ptr1)++;   //gives the error: increment of read only location
	//ptr2++;     //increment of read only variable
	//(*ptr3)++;   //gives the error: increment of read only location
	//ptr3++;     //increment of read only variable
	(*ptr)++;
	ptr++;
	return 0;
}
