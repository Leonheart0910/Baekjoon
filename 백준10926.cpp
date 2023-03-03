#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string Id;
	
	//cin >> Id; //공백이 있는 문자에서 사용x 
	getline(cin,Id);
	cout << Id << "\?\?!" << endl;
	//c++에서는 물음표를 여러개 연달아 쓸 수 없다. escape 문자 
	
	return 0;
}
