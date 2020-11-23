#include <stdio.h>
#define N 9
int main(){
	
	int i, max=0, order; 
	int a[N];
	
	for(i=0; i<N; ++i){
		scanf("%d", &a[i]);
		
		if(a[i]>max){
			max = a[i];
			order = i;
		}
	}
	printf("%d\n%d\n", max, order+1);
	
	return 0;
}

