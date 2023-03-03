#include <stdio.h>

void printAB(int x, int y)
{ 
    printf("Print Vars in Order %d,%d\n", 
    x,y);
}

void pswap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a = 2, b = 3;

    printAB(a,b);
    pswap(&a, &b);
    printAB(a,b);    

    return 0;
}

