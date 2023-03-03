//run the following codes:
//main.cpp
//pet

#include <iostream>
using namespace std;

class petBudget{
	public: double expenses;
};

class pet{
	public: 
	petBudget budget;
	string name;
	int age;

	void sound(){
		cout << "Animal Sound" << endl;
	}
};

class dog : public pet{
	public : 
		void sound(){
			cout << "wuff" << endl;
		}
};

class cat : public pet{
	public :
	
};

int main(){

	cat kitty;
	dog jindol;
	
	kitty.name = "kitty";
	kitty.budget.expenses = 2.45;
	
	jindol.name = "jindol";
	jindol.budget.expenses = 3.45;

	cout << kitty.name << endl;
	cout << kitty.budget.expenses << endl;
	kitty.sound();
	cout << kitty.name << endl;

	
	cout << jindol.name << endl;
	cout << jindol.budget.expenses << endl;
	jindol.sound();
	
	return 0;
	
}
