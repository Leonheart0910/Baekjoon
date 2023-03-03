#include <stdio.h>

//selection sort(선택정렬)

void printArray(int* arr, int size){
	int i;
	printf("정렬후 \n");
	for(i=0; i<size; ++i) {
		printf("%d\t", arr[i]);	
	}
}
void sortArray(int* arr, int size){
	int i, j, temp;
	
	
	
	for(i=0; i<size-1; ++i){
		for(j=i+1; j<size; ++j){
			if(arr[i]<arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
}
int main(){
	int i, n, size=5;
	int arr[size];
	
	printf("정렬전\n");
	for(i=0; i<size; ++i){
		scanf("%d", &arr[i]);
	}
	
	//size = sizeof(arr)/sizeof(int);
	//sortArray(&(arr[]), 5);
	//sortArray(&(*arr), 5);
		
	sortArray(arr, size);
	printArray(arr, size);
	
	return 0;
}
