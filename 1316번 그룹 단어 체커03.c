#include <stdio.h>

int main(){
	
	int i, j, k, start, cnt=0;
	char str[101];
	
	scanf("%d", &start);
	
	for(i=0; i<start; ++i){
		
		int al[26]={0,};
		int str_index=0;
		
		scanf("%s",str);
		
		++cnt;
		
		for(j=0; str[j]!=0; ++j){
			str_index = (str[j]-'a');//index쓰는건 중요
			if(al[str_index]!=0){
				if(str[j-1]!=str[j]){	
					--cnt;
					break;
				}
			} 
			else
				al[str_index] = 1;	
		}
	}
	printf("%d\n", cnt);
	
	return 0;
}
