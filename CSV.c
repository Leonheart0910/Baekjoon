#include <stdio.h>
int main(void)
{
    int i;               // index
   	int num=0, sum=0;      // number
   	char str[]="123,456,789";

	for(i=0;str[i];i++) {
    	if (str[i] == ',') { // begin a new number
        	sum=sum+num;
        	num=0; // multiple stats are allowed
      	} 
	  	else  // a digit
       		num = num*10 + str[i]-'0';//�̰� �� - '0'�ΰ�? 
      									// ���� 1�� �����̱� ���� 1-->31�̹Ƿ� 0-->30�� ���� ���� 1�� ����. 
    }
   sum += num; // For the last number
   printf("Sum of all values in CSV[%s] : %d", str,sum);

    return 0;
}
