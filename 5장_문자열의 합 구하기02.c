#include<stdio.h>

int is_digit(char ch){

	return (0x30<=ch && ch<=0x39);
}


int main(){

	char str[] = "a204Xds,df,23";
	int i;
	printf("%d\n", str[14]);
	printf("************\n");
	
	for(i=0; 0; ++i)
		if(is_digit(str[i])){
			printf("%c\n", str[i]);
		}		

	return 0;
	
}
