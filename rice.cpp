#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	int day = 7;
	int Kg, g, Number;
	int M = 600*10000, m = 520*10000;
	
	int sum = 0;
	
	//520�� ~ 600�� �� ����

		srand(time(NULL)); // ��������
		for(int i = 0; i<10; i++){
			sum = sum + rand()%(M-m+1) + m;
		
		}
		cout << sum/10000 << " ��" << sum%10000 << "��" << endl;

		sum = 0;

	return 0;
}
