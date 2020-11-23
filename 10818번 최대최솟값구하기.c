#include <stdio.h>

int main(){

	int i, min=1000001, max=-1000001, N, num;
	
	scanf("%d", &N);
	
	for(i=0; i<N; ++i){
		scanf("%d", &num);
		
		if(num > max){
			max = num;
		}
		
		if(num < min){
			min = num;
		}
	}
	
	printf("%d %d\n", min, max);

	return 0;	
}
