#include <iostream>
using namespace std;

class student{
	public:
	string name;
	int id, old;
};

int main(){
	
	student student1;
	char n[20];
	cin.getline(n,sizeof(n));
	student1.name = n;
	student1.id = 201924488;
	student1.old = 19;
	
	cout << student1.name;
	
	return 0;
}
