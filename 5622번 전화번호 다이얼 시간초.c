#include <stdio.h>

int main(){
	int i;
	int sum=0;
	int time[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	char al[16];
	
	scanf("%s", al);
	
	for(i=0; al[i]!='\0'; ++i)
		sum = sum + time[al[i]-'A'];
		
	printf("%d\n", sum);
	
	return 0;
}
