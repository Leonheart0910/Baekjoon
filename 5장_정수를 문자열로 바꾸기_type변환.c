#include <stdio.h> 
int main(void)
{
    int i;		// index
    unsigned int num=0;	// number
    unsigned int nd;
    char str[11];       // Max Digits + 1 --> '\0'
    char rstr[11];      // Max Digits + 1

    scanf("%d",&num);
 
    // Enter your code here
	
	for(i = 0, nd = num ; nd > 0 ; i++, nd = nd/10 )
		rstr[i] = nd%10 + '0'; // str[4] = "213" --> 213'0'¿Ã¥Ÿ		
    
    for(nd=0, i=num; nd<11 && !(i == 0); nd++) i = i/10;
    
	for(i=0; i<=(nd-1); i++)
    	str[i] = rstr[(nd-1)-i];
    	
    printf("%d is [%s]\n",num, str);
	    
    return 0;
}
