#include <stdio.h>

int main(){
	
	int a, b, A, B;
	int mul, spr;
	
	scanf("%d %d", &a, &b);
	if(a>=b){
		A=a;
		B=b;
	}
	else{
		A=b;
		B=a;
	}
	while(1){
		spr = A%B;
		if(spr == 0)
			break;
		A=B;
		B=spr;	
	}
	printf("%d %d", B, (a*b)/B);
	
	return 0;
}
