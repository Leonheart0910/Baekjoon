#include <stdio.h>

int main(){

	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF){
	/*
		EOF(End Of File)
		파일의 끝을 표현하기 위한 함수(-1의 값을 가진다)
		콘솔의 경우 Ctrl + z 가 파일의 EOF를 의미
	*/
		printf("%d\n", a+b);	
	}
	
	return 0;
}
