#include <stdio.h>

int main() {
	
	double x, y, z;
	
	printf("�Ϲ� �µ�: ");
	scanf("%lf", &x);
	printf("���� �µ�: ");
	scanf("%lf", &y); 
	
	z = 40.6 + 0.72*(x+y) ; 
	
	printf("�������� : %.2f", z);
	
	return 0;
}
