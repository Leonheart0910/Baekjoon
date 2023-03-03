#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	int day = 7;
	int Kg, g, Number;
	int M = 600*10000, m = 520*10000;
	
	int sum = 0;
	
	//520만 ~ 600만 한 섬당

		srand(time(NULL)); // 랜덤설정
		for(int i = 0; i<10; i++){
			sum = sum + rand()%(M-m+1) + m;
		
		}
		cout << sum/10000 << " 만" << sum%10000 << "개" << endl;

		sum = 0;

	return 0;
}
