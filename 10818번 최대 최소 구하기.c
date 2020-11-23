#include <stdio.h>

int main(){

	int i, j, N;
	int temp;
	int a[] = {0,};
	
	scanf("%d", &N);
	printf("%d", N);
	
	for(i=0; i<N; ++i){
		scanf("%d", &a[i]);		
	}
	
	for(i=0; i<N; ++i){
		for(j=0; j<N-1; ++j){
			if(a[j] < a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
		}
	}
	printf("%d %d\n", a[N-1], a[0]);

	return 0;
}
