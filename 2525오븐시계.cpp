#include <iostream>
using namespace std;

void Oben(int a, int b, int c){
	
	int Min;
	int hour;
	hour = a + c/60;
	Min = c%60;
	if(hour >= 24){
		hour = hour - 24;
		if(b + Min < 60) cout << hour << " " << b + Min;	
		else{ 
			if(hour + 1 == 24) hour = -1;
			cout << hour + 1 << " " << b + Min - 60; 
		}
		
 	}
 	else{
		if(b + Min < 60) cout << hour << " " << b + Min;
		else{ 
			if(hour + 1 == 24) hour = -1;
			cout << hour + 1 << " " << b + Min - 60; 
		}
	}
}

int main(){
	
	int t, m, m2;
	
	cin >> t >> m;
	cin >> m2;
	
	Oben(t, m ,m2);
	return 0;
}
