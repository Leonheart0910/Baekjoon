//윤년을 계산하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
	
	int year;
	
	scanf("%d", &year);
	
	if(year%400==0 || (year%4==0 && year%100!=0))
		printf("1");
	
	else
		printf("0");

	return 0;
} 
