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
        printf("������ �Է� :");
        scanf_s("%d", &tmp);
        printf("������ : ");
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
        printf("\n\n��� 1, ���� 0 :");
        scanf_s("%d", &exit);
        printf("\n");
    }
}
