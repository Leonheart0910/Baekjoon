#include <stdio.h> 
#include <stdlib.h> 
/**
* @brief : generate and return a random digit in 0~9
* @return : a digit in 0~9
* @param	 : none
*/
int generate_a_digit() {
	return (rand()%10);
}

/**
* @brief : check digit duplication
* @return : return true if all digits of the number are different, false otherwise.
* @param	 : 	num - a 3-digits number to be checked for digit duplication.
*/
int is_different_digits(int num) {
	int digits[3];
	int is_different = 1; 

	digits[0] = num%10;
	digits[1] = (num/10)%10;
	digits[2] = (num/100)%10;
	if ((digits[0] == digits[1]) ||
		(digits[0] == digits[2]) ||
		(digits[1] == digits[2]) )
		is_different = 0;

	return is_different;
}

int guess_number()
{
	int num;
	while (1) {
		printf("Enter your guess : ");
		scanf("%d",&num);
		if (num < 1000 && is_different_digits(num)) break;
		printf("Input Error !!! ? Wrong number format\n");
	}
	return num;
}

int generate_target_number() {
	// Enter Your Code Here
	int i, num0 = -1, num1 = -1, num2 = -1, num=0;
	
	srand(time(0));
	num0 = generate_a_digit();
	
	num1 = generate_a_digit(); 
	while(num0 == num1)
		num1 = generate_a_digit();
	
	num2 = generate_a_digit();
	while(num0 == num2 || num1 == num2)
		num2 = generate_a_digit();
	
	num = num0*100 + num1*10 + num2;	
	printf("%03d",num);
	return num;
}


