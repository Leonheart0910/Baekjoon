#include <stdio.h>

int main(void){

	int a;

	

	scanf("%d",&a);

	

	if(a%2==0 && a%3==0)

		printf("a == multiple of 2 and 3\n");

	else if(a%2==0)

		printf("a == multiple of 2\n");

	else if(a%3==0)

		printf("a == multiple of 3\n");

	if(a%2!=0 && a%3!=0)

		printf("a == other\n");

		

	return 0;

}


