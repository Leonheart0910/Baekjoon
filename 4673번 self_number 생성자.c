#include <stdio.h>
#define N 10000

int self_number(int i){
	int j, sum;
	sum = i;
	
	for(j=i; j!=0;){
		sum	= sum + j%10;
		j = j/10;
	}
	
	return sum;
}
int main(){
	int a[N+1] = {0,};
	int i,j;
	for(i=1; i<N+1; ++i){
		if(self_number(i)<=N)
			++a[self_number(i)];
	}
	
	for(i=1; i<N+1; ++i){
		if(a[i]==0)
			printf("%d\n", i);
	}
	
	return 0;
}
