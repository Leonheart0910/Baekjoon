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
	    	printf("%d ",(str[i])-'0');// 0은 0x30이므로 0x31에서 
						//0x30을 빼야지 1이 나오므로 -'0'을 한다.
    	}
    printf("Sum of all digits in");
    printf(" [%s] : %d\n",str,sum);

    return 0;
}
