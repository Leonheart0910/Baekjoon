#include<stdio.h>

int is_digit(char ch){

	return (ch <= 0x30 && ch >= 0x39);
}


int main(){

	char str[] = "a234Xds,df,23";
	int i;
	
	printf("%d\n", str[0]);
	for(i=0; str[i]; ++i)
		if(is_digit(str[i])){
			printf("%d", str[i]);
		}		

	return 0;
	
}
