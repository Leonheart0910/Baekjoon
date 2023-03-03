#include <stdio.h>

int hexa2decimal(char *phexa) {
	int decimal;
	int res=0;
	
	for(phexa += 2; *phexa != '\0'; phexa++){
		char num = *phexa;
		
		if(num>='0' && num <='9')
			decimal = num - '0';	
		else 
			decimal = num -'A' + 10;	
		
		res = res * 16 + decimal;
	}
	
	return res;
}
int main(void) {
	char hexa1[] = "0x1F34";
	char hexa2[] = "0x34CD56";
	printf("%s = %d\n", hexa1, hexa2decimal(hexa1));
	printf("%s = %d\n", hexa2, hexa2decimal(hexa2));

	return 0;
}
