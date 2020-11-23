#include <stdio.h>
#define B 42
int main(){
	
	int i, j, cnt=10;
	int a[10];
	int b[10];
	
	for(i=0; i<10; ++i){
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; ++i){
		b[i] = a[i]%B;
	}
	for(i=0; i<10; ++i){
		for(j=i; j<9; ++j){
			if(b[i]==b[j+1]){
				--cnt;
				break;
			}
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}
