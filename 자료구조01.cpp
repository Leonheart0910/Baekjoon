#include <iostream>
using namespace std;

int main(){
	
	int n=1, sum = 0;
	
	for(int i=0; i<=n; i++){
		for(int j=1; j<=n; j++)
			sum++;
	}
	cout<< sum;
	return 0;
}
