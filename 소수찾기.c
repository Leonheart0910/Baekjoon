#include <stdio.h>

int is_prime(int n)
{
	int x;
	for(x=2;x<n;++x)
		if(n%x==0)
			break;
	return (n>1)&&(x==n);
}

int main(void)
{
	int beg, end, n , sum=0;
	
	scanf("%d%d", &beg, &end);
	
	for(n=beg;n<=end;n++){
		if(is_prime(n)){
			if(sum>0)
				printf(" + ");
			printf("%d ", n);
			sum = sum+n;
		}
	}
	printf("= %d", sum);
	
	return 0;
}
		
