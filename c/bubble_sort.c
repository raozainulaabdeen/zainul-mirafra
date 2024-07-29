#include <stdio.h>

void bubble_sort(int *a, int n){
	int i, j, temp;
	int swap;
	for(j = 1; j < n; j++){
		swap = 0;
		for(i = 0; i < (n -j); i++){
			if(a[i] > a[i+1]){
				if(i != (n - j -1)){
					swap = 1;
				}
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		if(swap == 0){
			break;
		}
	}
	printf("number of iteration is %d\n", j);
}


int main(){
	int arr[6] = {1, 2, 6, 3, 4, 5};
	bubble_sort(&arr[0], 6);
	printf("sorted array:\n");
	for(int i = 0; i < 6; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
