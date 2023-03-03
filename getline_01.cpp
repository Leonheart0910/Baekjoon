#include <iostream>
using namespace std;

int main(){
	cout << "어서오세요 행복동물병원입니다.\n" << "동물의 종류와 이름 나이를 기입해 주세요. : " ;
	char animal[40];
	cin.getline(animal, sizeof(animal));
	
	cout << "다인의 동물은 : " << animal << endl;
	cout << sizeof(animal) << endl;

		
}
