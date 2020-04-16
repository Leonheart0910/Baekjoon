#include <stdio.h>
//오름차순 정렬 
int main(){
	int i, j, k, temp, sum=0;
	int a[9] = {0,};
	int nocon1, nocon2, n1, n2;
	
	for(i=0; i<9; ++i){
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	for(i=0; i<9; ++i){
		for(j=0; j<8; ++j){
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
		}
	}
	for(i=0; i<8; ++i){
		for(j=i; j<8; ++j){
			if(a[i] + a[j+1] == (sum - 100)){
				nocon1 = a[i];
				n1 = i;
				nocon2 = a[j+1];
				n2 = j+1;
				a[i] = 0;
				a[j+1] = 0;
				break;
			}
		}
	}
	for(i=0; i<9; ++i){
		if(a[i] != 0)
			printf("%d\n", a[i]);
	}
	return 0;
}
