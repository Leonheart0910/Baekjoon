#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	
	srand(time(NULL));

	char spade[13] = { 'A',2,3,4,5,6,7,8,9,10,'J','Q','K' };
	char clover[13] = { 'A',2,3,4,5,6,7,8,9,10,'J','Q','K' };
	char heart[13] = { 'A',2,3,4,5,6,7,8,9,10,'J','Q','K' };
	char diamond[13] = { 'A',2,3,4,5,6,7,8,9,10,'J','Q','K' };

	cout << spade[0] << endl;

	return 0;
}



