#include <stdio.h>

int main(){
	char S[1001] = {0,};
	int i, j, k, cnt, R;
	
	scanf("%d", &cnt);
	
	for(i=0; i<cnt; ++i){
		scanf("%d %s", &R, S);
		for(j=0; S[j]!='\0'; ++j)
			for(k=0; k<R; ++k)
				printf("%c",S[j]);	
		printf("\n");
	}
	
	return 0;
}
