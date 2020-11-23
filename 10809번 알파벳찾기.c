#include <stdio.h>

int main(){
	int i, j;
	char s[101]={0,};
	
	scanf("%s", s);
	
	for(j='a'; j<='z'; ++j){
		for(i=0; s[i]!='\0'; ++i){
			if(j==s[i]){
				printf("%d ",i);	
				break;
			}
		}
		if(s[i]=='\0')
			printf("%d ", -1);
	}
	return 0;
} 
