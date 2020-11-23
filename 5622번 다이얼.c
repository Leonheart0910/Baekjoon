#include <stdio.h>

int main(){
	int i, sum=0;
	char s[16]={0,};//15+1-->16 +1 은 문자열 입력시 '\0' 포함 
	
	scanf("%s", s);

	for(i=0; s[i]!=0; ++i){
		if('A'<=s[i] && s[i]<='C') sum = sum + 3;
		if('D'<=s[i] && s[i]<='F') sum = sum + 4;
		if('G'<=s[i] && s[i]<='I') sum = sum + 5;	
		if('K'<=s[i] && s[i]<='L') sum = sum + 6;	
		if('M'<=s[i] && s[i]<='O') sum = sum + 7;		
		if('P'<=s[i] && s[i]<='S') sum = sum + 8;	
		if('T'<=s[i] && s[i]<='V') sum = sum + 9;	
		if('W'<=s[i] && s[i]<='Z') sum = sum + 10;	
	} 
	printf("%d\n", sum);
	return 0;
}
