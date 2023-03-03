#include<stdio.h>
int main(){
	
	double kwh, x, total_fee;
	double elec_fee, add_fee, basic_fee ;
	
	printf("얼마나 전기를 사용하였는가 (kwh) ");
	scanf("%lf", &kwh);
	
	if(kwh<=200.0){
		x = 910.0;
		elec_fee = x + kwh*93.3;
	}
	else if(kwh<=400){
		x = 1600.0;
		elec_fee = x + 200*93.3 + kwh-200*187.9;
	}	
	else{
		x = 7300.0;
		elec_fee = x + 200*93.3 + 200*187.9 + (kwh-400)*280.6;	
	}
	
	add_fee = elec_fee*0.1;
	basic_fee = elec_fee*0.037;
	
	total_fee = (int)elec_fee + (int)add_fee + (int)basic_fee;
	printf("%d\n",(int)total_fee);
	
	return 0;
}	
	
	
	
