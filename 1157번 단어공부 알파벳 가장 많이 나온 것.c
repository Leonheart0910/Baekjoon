#include <stdio.h>

int main(){
	
	char str[1000001];
	int al[26] = {0,};
	
	int i;
	int max, max_index=0;
	
	scanf("%s", str);
	//대문자를 소문자로 바꾸기
	//'A' 65 --> 'a' 97  
	for(i=0; str[i]!='\0'; ++i){
		if('a'<=str[i] && str[i]<='z'){
			str[i] -= 32;
		}
		al[str[i]-'A']++;
	}
	
	max=al[0];
	
	for(i=1; i<26; ++i){
		if(max<al[i]){
			max = al[i];
			max_index = i;
		}
		else if(max==al[i] && al[i]!=0){
			max_index = -1;
		}
	}
	
	if(max_index!=-1)
		printf("%c\n", max_index+'A');
	else
		printf("?\n");
	
	return 0;
}
