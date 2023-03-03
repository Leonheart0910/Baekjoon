#include <stdio.h> 
#include <time.h>
#include <math.h>

#define	MAX_NUM 1000000

int is_prime(int n)

{
	int i;	

	if(n<10){

      	if(n==1||n==4||n==6||n==8||n==9){

       		return 0;
		}

      	if(n==2||n==3||n==5||n==7){
        	return 1;

      	}
   }

    else if(n>9&&(n%10==1||n%10==3||n%10==7||n%10==9 )){

    	for(i=3;i<=sqrt(n);i++){

        	if(n%i==0){

                return 0;
            }
        }
    }
    
   	else if(n>9&&(n%10==0||n%10==2||n%10==4||n%10==5||n%10==6||n%10==8)){

      	return 0;

	}

	

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


