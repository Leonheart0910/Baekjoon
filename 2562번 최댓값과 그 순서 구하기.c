#include <stdio.h>

int main(){
	
	int i, max=0; 
	int a[9] ;
	
	for(i=0; i<9; ++i){
		scanf("%d", a[i]);
		
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("%d\n%d\n", max, i);
	
	return 0;
}

