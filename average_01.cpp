#include <iostream>
using namespace std;

int main(){
	int N;
	double val, total = 0;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> val;
		total = total + val;
	}
	cout << total << endl;
	cout << "average = " << total/(double)N << endl;
}

