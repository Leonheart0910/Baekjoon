#include <stdio.h> 

int is_alpha(char ch)
{	
	return ((0x41<=ch && ch<=0x5A) || (0x61<=ch && ch<=0x7A));
	
}

int is_upper(char ch)
{
	return (0x41<=ch && ch<=0x5A);

}
int main(void)
{
    char ch;

    scanf("%c", &ch);
    printf("%c is ", ch);
    if (is_alpha(ch)) {
		if (is_upper(ch))
	    	printf("an uppercase alphabetic character\n");
		else
	    	printf("a lowercase alphabetic character\n");
    	}
    else
	printf("is not an alphabetic character\n");

    return 0;
}
