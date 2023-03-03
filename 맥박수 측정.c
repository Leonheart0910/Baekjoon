#include <stdio.h>

int main() {
	 
	int p;
	 
	scanf("%d", &p);
	if(60 <= p && p <= 90){ //if(60<= p <= 90) 는 잘못됨 논리오류 
		printf("normal");
	}
	else printf("oh no"); 
	return 0;
}
