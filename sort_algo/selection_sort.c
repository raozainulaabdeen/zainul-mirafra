#include <stdio.h>

void selection_sort(int arr[], size_t n);
void swap(int *a, int *b);

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
}


void selection_sort(int arr[], size_t n){
	int min_inx;

	for(int i = 0; i < n-1; i++){
		min_inx = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[min_inx]){
				min_inx = j;
			}
		}
		if(min_inx != i){
			swap(&arr[i], &arr[min_inx]);
		}
	}
}


int main(){
	int arr[10] = {22, 11, 1000, 100, 50, 1, 20, 30, 10, 5};
	selection_sort(&arr[0], 10);
	for(int i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}
