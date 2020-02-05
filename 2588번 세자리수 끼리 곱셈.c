#include <stdio.h>

int main(){

	int a, b;
	int i, j;
	int val=0, sum=0;
	
	scanf("%d%d", &a, &b);
	
	for(j=b, i=1; j!=0; j=j/10, i=i*10){
		val = a*(j%10);
		printf("%d\n",val);
		sum = sum + val*i;
	}

	printf("%d", sum);

	return 0;
}
