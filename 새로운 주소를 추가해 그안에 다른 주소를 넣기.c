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
	
	p++; //���� �����ͷ� �̵��Ѵ�. (�����ּҷ� �̵��Ѵ� EX int �� 4byte �ڿ� �ִ� �ּҷ� �̵��Ѵ�.) 
	printf("a = %d , a addr = %p\n", a, &a);
	printf("b = %d , b addr = %p\n", b, &b);
	printf("p value = %d , p addr = %p\n", *p, &p);
	
	*a = *a + *p-- ; 
	// *p -- ���� �����ʹ� �Ϲ� ����� �޸� �����ʿ��� ���� ������ ����� ������ 
	printf("a = %d , a addr = %p\n", a, &a);
	printf("b = %d , b addr = %p\n", b, &b);
	printf("p value = %d , p addr = %p\n", *p, &p);
	 
	return 0;
}
