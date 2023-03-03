#include<stdio.h>

//전역변수 쓰는 법 다시 알기 

int main(){
	
	int kwh, x, total_fee;
	double elec_fee, add_fee, basic_fee ;
	
	printf("얼마나 전기를 사용하였는가 (kwh) ");
	scanf("%d", &kwh);
	
	if(kwh<=200){
		x = 910;
		elec_fee = x + kwh*93.3;
	}
	else if(kwh<=400){
		x = 1600;
		elec_fee = x + (200*93.3) + (kwh-200)*187.9;
	}	
	else{
		x = 7300;
		elec_fee = x + 200*93.3 + 200*187.9 + (kwh-400)*280.6;	
	}
	
	elec_fee = (int)(elec_fee);	
	add_fee = (int)(elec_fee*0.1);
	basic_fee = (int)(elec_fee*(0.037));
	total_fee = (int)elec_fee + add_fee + basic_fee;

	printf("%d\n", total_fee);		
	return 0;
}
