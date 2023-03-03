#include <stdio.h> 

int main(void)
{
    int i;	// index
    int sum=0;	// sum
    int a[10]={3,7,8,9,2,3,4,6,1,7};

    for(i=0;i<10;i=i+1) {
	sum = sum + a[i];
    }
    printf("The sum of a[10] is %d\n",sum);

    return 0;
}
