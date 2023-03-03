#include <stdio.h> 
#define LENGTH 5
int main(void)
{
    double a[LENGTH]={1.1, 2.2, 3.3, 2.2, 1.1};
    double v;
    int i;
    
    scanf("%lf", &v);

    for (i=LENGTH-1;i>=0&&a[i]!=v;i--)
		;
	if(i<0) printf("Not "); 
	printf("Found : %d",i);
	
    return 0;
}     
