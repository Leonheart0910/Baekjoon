#include <stdio.h>

int main(){
	
	int x, y;
	
	
	while(1){ 
	
		scanf("%d", &x);
		
		if(x<100){
			printf("Sorry, the number you entered is less than 100\n");
			continue ;	
		}	
		else if(x>=100){
			y = (x/10)%10;
		
			if(y%2==0){
				printf("The 2nd last number of %d is %d and it is even\n", x, y);
				break;
			}
			else{
				printf("The 2nd last number of %d is %d and it is odd\n", x, y);
				break;
			}
		
		}
	}
	
	
	return 0 ;

}
