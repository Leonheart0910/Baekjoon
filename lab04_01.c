#include <stdio.h>

int main() {
	
	double x, y, z;
	
	printf("일반 온도: ");
	scanf("%lf", &x);
	printf("습구 온도: ");
	scanf("%lf", &y); 
	
	z = 40.6 + 0.72*(x+y) ; 
	
	printf("불쾌지수 : %.2f", z);
	
	return 0;
}
