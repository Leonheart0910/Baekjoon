#include <stdio.h>

int main(void){

	int money, b50000, b10000, b5000, b1000;

	money=988500;

	

	b50000=money/50000;

	money%=50000;

	

	b10000=money/10000;

	money%=10000;

	

	b5000=money/5000;

	money%=5000;

	

	b1000=money/1000;

	money%=1000;

	

	printf("50000�� : %d ��\n10000�� : %d ��\n5000�� : %d ��\n1000�� : %d ��\n",b50000,b10000,b5000,b1000);

	

	return 0;

}


