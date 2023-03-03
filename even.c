
#include <stdio.h> 
int main(void)
{
	
	int money = 1000, price = 250;
	int change, c500, c100, c50, c10;
	
	change = money - price;
	
	c500 = change / 500;
	change = change % 500;
	
	c100 = change / 100;
	change = change % 100;
	
	c50 = change / 50;
	change = change % 50;
	
	c10 - change / 10;
	change = change % 10;
	
	printf("500원 : %d개\n", c500);
	printf("100원 : %d개\n", c100);
	printf("50원 : %d개\n", c50);
	printf("10원 : %d개\n", c10);	
	return 0;
}
