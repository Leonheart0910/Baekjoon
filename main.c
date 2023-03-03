#include <stdio.h>
void decimalToBinary();
int main(void)
{
    decimalToBinary();
    return 0;
}
void decimalToBinary(){
    int binary;
    int c = 0, exit = 1;
    int tmp;
    while (exit == 1){
        printf("십진수 입력 :");
        scanf_s("%d", &tmp);
        printf("이진수 : ");
        for (c = 11; c >= 0; c--)
        {
            binary = tmp >> c;
            if (binary & 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n\n계속 1, 종료 0 :");
        scanf_s("%d", &exit);
        printf("\n");
    }
}
