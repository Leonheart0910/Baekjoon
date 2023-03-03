#include <iostream>
using namespace std;

int main(){
	
	int a, b, c;
	int H, M;
	
	cin >> a >> b;
	cin >> c;
	
	if(b + c < 60){
		H = a;
		M = b + c;
	}
	else{
		H = (a + int((b+c)/60))%24;
		M = int(b+c)%60;
	}
	cout << H << " " << M;
	
	return 0;
}
