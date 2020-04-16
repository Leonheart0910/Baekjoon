#include <stdio.h>

int prime(int n){
	int i, val;
	for(i=2; i<n; ++i){
		if(n%i==0)
			break;			 
	}
	return n==i && n>1 ;
}

int main(){
	
	int i, beg, end;
	
	scanf("%d%d", &beg, &end);
	
	for(i=beg; i<=end; ++i){
		if(prime(i))
			printf("%d  ", i);		
	}
	
	return 0;
}
