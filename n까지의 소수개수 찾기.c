#include <stdio.h>

int main(){
	
	int i, j;
	int num, cnt=0;
	
	scanf("%d", &num);
	
	for(i=2; i<=num; ++i){
		for(j=2; j<=i; ++j){
			if(i%j!=0)
				break;
			else
				++cnt;
		}
	}
	printf("%d\n", cnt);

	return 0;
}
