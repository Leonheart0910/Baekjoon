#include <stdio.h>
#define pi 3.14
int main() {
	
	double r, s, v;
	scanf("%lf", &r);
	
	s = 4.0*pi*r*r;
	
	v= (4.0/3.0)*pi*r*r*r;
	
	printf("ǥ���� : %f\t ���� : %f\n", s, v);


	return 0;
}
