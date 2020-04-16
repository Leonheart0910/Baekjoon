#include <stdio.h>

int main(){
	int a, b, i, suma=0, sumb=0;	
	scanf("%d %d", &a, &b);
	
	for(i=a; i!=0; i=i/10){
		suma = suma*10;
		suma = suma + i%10;
	}	
	for(i=b; i!=0; i=i/10){
		sumb = sumb*10;
		sumb = sumb + i%10;
	}
	
	if(suma > sumb)
		printf("%d\n", suma);
	
	else
		printf("%d\n", sumb);		
		
	return 0;
}

