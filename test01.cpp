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
	 void sound(){
	 	cout << "meow" << endl;
	}
};

class household : public cat{};

int main(){

	household Jico;
	dog jindol;
	
	Jico.name = "kitty";
	Jico.budget.expenses = 2.45;
	
	jindol.name = "jindol";
	jindol.budget.expenses = 3.45;

	cout << Jico.name << endl;
	cout << Jico.budget.expenses << endl;

	Jico.sound();
	
	cout << jindol.name << endl;
	cout << jindol.budget.expenses << endl;
	jindol.sound();
	
	return 0;
	
}
