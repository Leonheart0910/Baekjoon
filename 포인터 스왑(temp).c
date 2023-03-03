#include <stdio.h>

void vswap(int x, int y){//call by value ��� 
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	printf("vswap x = %d , y = %d\n", x, y);
}

void pswap(int* x, int* y){//call by reference (�ּҸ� �ҷ��´ٸ�)
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	printf("pswap x = %d , y = %d\n", *x, *y);
}

int main(){
	
	int a = 10;
	int b = 20;
	
	printf("a == %d , a address = %p\n", *(&a), &a);
	// a�ּ�(&a)�� ���� ����(*)�� �ǹ��ϹǷ� a�� ���� 
	printf("b == %d , b address = %p\n", b, &b);

	vswap(a,b);
	
	pswap(a,b);
	 
	return 0;
}
