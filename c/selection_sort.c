#include <stdio.h>


void selec_sort(int *a, int n){
	int i, j, pos, small, temp;

	for(i = 0; i < (n -1); i++){
		small = a[i];
		pos = i;
		for(j = (i+1); j < n; j++){
			if(a[j] < small){
				small = a[j];
				pos = j;
			}
		}
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
	}
}

int main(){
	int a[5] = {2, 5, 3, 4, 1};
	selec_sort(&a[0], 5);
	for(int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
