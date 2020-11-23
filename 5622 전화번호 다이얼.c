#include <stdio.h>

int main(){
	int i, sum=0;
	char s[16];//15+1-->16 +1 은 문자열 입력시 '\0' 포함 

	scanf("%s", s);

	for(i=0; s[i]!='\0'; ++i){
			 if('A'<=s[i] && s[i]<='C') sum = sum + 3;
		else if('D'<=s[i] && s[i]<='F') sum = sum + 4;
		else if('G'<=s[i] && s[i]<='I') sum = sum + 5;	
		else if('J'<=s[i] && s[i]<='L') sum = sum + 6;	
		else if('M'<=s[i] && s[i]<='O') sum = sum + 7;		
		else if('P'<=s[i] && s[i]<='S') sum = sum + 8;	
		else if('T'<=s[i] && s[i]<='V') sum = sum + 9;	
		else if('W'<=s[i] && s[i]<='Z') sum = sum + 10;	
	} 
	printf("%d\n", sum);
	
	return 0;
}
