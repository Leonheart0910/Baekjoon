#include <stdio.h> 

int main(void)
{
    int b, e, m, i, s;
    
    scanf("%d%d%d", &b, &e, &m);// 1 11 3
    s=0;
    if(m!=0) {
		for(i=b; i<=(e); i++)
	    		if(i%m == 0){

					s=s+i;
					
					}
				printf("sum of mutiple: %d\n", s);
    }
	
	else if(m==0)
		printf("can not execute\n");

    
    return 0;
}
