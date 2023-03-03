#include <stdio.h>

int main(void){

	int i;

	

	for(i=1;i<=99;i++)

		if(102%i==0 || i%17==0)

			printf("%d ",i);	

	return 0;

}


