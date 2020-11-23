#include <stdio.h>

int main(){

	int n1, n2;
	int max, min;
	int a, b, spr;
	
	scanf("%d %d", &n1, &n2);
	
	if(n1==n2){
		max = n1;
		min = n1;
	}
	
	if(n1>n2){
		a = n1;
		b = n2;
	}
	else{
		a = n2;
		b = n1;
	}
	
	while(1){
		spr = a%b;
		if(spr == 0){
			min = b;
			max = n1*n2/min;
			break;
		}
		a = b;
		b = spr;
	}
	printf("%d %d\n",min, max);	
	
	return 0;
}
