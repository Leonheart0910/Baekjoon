#include <stdio.h> 
#include <time.h>

#define	MAX_NUM	1000000

int is_prime(int n)
{
    // Enter your Code Here
	
	

    return 1;
}

int main(void)
{
    int n=0, nprime=0, max_prime=0;
    clock_t t_start, t_end;
    double t_elapsed;
	
    printf("**************************************************\n");
	
    t_start = clock();
    for (n=1; n<=MAX_NUM; n++)	{
	if (is_prime(n)) {
	    nprime++;
	    max_prime = n;
	}
	if (n%(MAX_NUM/50)==0) printf("*");
    }
    t_end = clock();
    t_elapsed = 1000.0*(t_end - t_start)/CLOCKS_PER_SEC;
	
    printf("\n# of Prime numbers between 1 and %d : %d\n", MAX_NUM, nprime);
    printf("The maximum Prime number <= %d : %d\n", MAX_NUM, max_prime);        
    printf("It takes %.2f(ms) to carry out this computation", t_elapsed);
    return 0;
}
