#include <stdio.h>

int main(){

	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF){
	/*
		EOF(End Of File)
		������ ���� ǥ���ϱ� ���� �Լ�(-1�� ���� ������)
		�ܼ��� ��� Ctrl + z �� ������ EOF�� �ǹ�
	*/
		printf("%d\n", a+b);	
	}
	
	return 0;
}
