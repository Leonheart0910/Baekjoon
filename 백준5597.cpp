#include <iostream>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;
int main(){
	
	int n, cnt=0;
	int out1[2];
	
	bool check[31] = {0,}; // allocate 31 memory for checking 1~ 30 (to mark 30)
	
	for(int i=0; i<28; i++){
		cin >> n;
		check[n] = true;
	}
	for(int i=1; i<31;i++){
		if(check[i]!=true){
			cout << i << endl;
		}
	}
	
	
		
	return 0;	
}