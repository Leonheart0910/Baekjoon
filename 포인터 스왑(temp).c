#include <stdio.h>

void vswap(int x, int y){//call by value 방식 
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	printf("vswap x = %d , y = %d\n", x, y);
}

void pswap(int* x, int* y){//call by reference (주소를 불러온다면)
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
	// a주소(&a)가 가진 내용(*)을 의미하므로 a와 같다 
	printf("b == %d , b address = %p\n", b, &b);

	vswap(a,b);
	
	pswap(a,b);
	 
	return 0;
}
