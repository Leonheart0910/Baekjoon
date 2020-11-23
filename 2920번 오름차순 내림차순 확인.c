#include <stdio.h>

int main(){

	int i, x=0, y=0;
	int a[8] = {0,};
	
	for(i=0; i<8; ++i){
		scanf("%d", &a[i]);
	}
	for(i=0; i<8; ++i){
		if(a[i] != i+1){
			++x;	
			break;
		}
	}
	if(x==0)
		printf("ascending\n");
	
	for(i=0; i<8; ++i){
		if(a[i] != 8-i){
			++y;	
			break;
		}
	}
	
	if(y==0)
		printf("descending\n");
		
	if(x!=0 && y!=0)
		printf("mixed\n");
	
	return 0;
}
