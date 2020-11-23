#include <stdio.h>

int main(){	
	
	int i, j, n, cnt=0;
	
	scanf("%d", &n); 
	for(i=2; i<=n; ++i){
		for(j=2; j<i; ++j){
			if(i%j==0)
				break;
		}
		if(j==i && n>1)
			++cnt;
	}
	printf("%d\n", cnt);
	
	return 0;
}
