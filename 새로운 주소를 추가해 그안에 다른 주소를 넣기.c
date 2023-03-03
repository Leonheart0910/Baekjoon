#include <stdio.h>

int main(){
	
	int a = 10;
	int b = 20;
	int* p = &b;
	
	printf("a = %d , a addr = %p\n", a, &a);
	printf("b = %d , b addr = %p\n", b, &b);
	printf("p = %p , p addr = %p\n", p, &p);
	
	b++;
	printf("a = %d , a addr = %p\n", a, &a);
	printf("b = %d , b addr = %p\n", b, &b);
	printf("p value = %d , p addr = %p\n", *p, &p);
	
	p++; //다음 포인터로 이동한다. (다음주소로 이동한다 EX int 면 4byte 뒤에 있는 주소로 이동한다.) 
	printf("a = %d , a addr = %p\n", a, &a);
	printf("b = %d , b addr = %p\n", b, &b);
	printf("p value = %d , p addr = %p\n", *p, &p);
	
	*a = *a + *p-- ; 
	// *p -- 에서 포인터는 일반 연산과 달리 오른쪽에서 왼쪽 순으로 계산해 나간다 
	printf("a = %d , a addr = %p\n", a, &a);
	printf("b = %d , b addr = %p\n", b, &b);
	printf("p value = %d , p addr = %p\n", *p, &p);
	 
	return 0;
}
