#include <stdio.h> 
int is_digit (char ch) {
    return (ch >= 0x30 && ch <= 0x39); 
}

int main(void)
{
    int i;		// index
    int sum=0;	        // digit sum
    char str[]="b234,56a,1";

    for(i=0;str[i];i=i+1) {
		if (is_digit(str[i]))
	    	printf("%d ",(str[i])-'0');// 0�� 0x30�̹Ƿ� 0x31���� 
						//0x30�� ������ 1�� �����Ƿ� -'0'�� �Ѵ�.
    	}
    printf("Sum of all digits in");
    printf(" [%s] : %d\n",str,sum);

    return 0;
}
