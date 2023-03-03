#include <stdio.h> 
int main(void)
{
    double nC, nF;

    printf("Enter Fahrenheit temperature:\n");
    scanf("%lf",&nF);

    nC = (double)5/9 * (nF - 32);

    printf("%lf degrees Fahrenheit is %lf degrees Celsius.\n", nF, nC);

    return 0;
}
