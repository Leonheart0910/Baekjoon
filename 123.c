#include <stdio.h> 
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a: %d and b: %d", a, b);
    return 0;
}
