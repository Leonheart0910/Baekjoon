#include <stdio.h>
//selection sort(��������)

void printArray(int* arr, int size){
	int i;
	printf("������");
	for(i=0; i<size; ++i) printf("%d\t", arr[i]);	
}
void sortArray(int* arr, int size){
	int i, j, temp;
	
	printf("������");
	for(i=0; i<size; ++i){
		scanf("%d", &arr[i]);
		printf("\t");
	}
	
	for(i=0; i<size-1; ++i){
		for(j=i+1; j<size; ++j){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
}
int main(){
	int i, n;
	int *arr;
	
	sortArray(arr, 5);
	printArray(arr, 5);
	
	return 0;
}
