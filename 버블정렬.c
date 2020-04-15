#include <stdio.h>

int main(){

	int arr[5] = {6, 4, 7, 9, 1};
	int i, j, k;
	int temp;
	
	for(i=0; i<5; ++i)
		printf("%3d", arr[i]);
		
	printf("\n");
	
	for(i=0; i<5; ++i){
		for(j=0; j<4; ++j){
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
		}
	}
	
	for(i=0; i<5; ++i)
		printf("%3d", arr[i]);

	return 0;
}
