#include <stdio.h>
int incr(int * a);

inline int incr(int *a){
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	*a = *a + 1;  
	return 0;
}



int main(){
	int a = 10;
	incr(&a);
	printf("%d\n", a);
	return 0;
}
