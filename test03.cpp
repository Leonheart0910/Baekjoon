#include <iostream>
#include <string>

using namespace std;

class petBudget {
public: double totalExpense;
		double licenseFee;
		double vetExpense;
		double foodExpense;
		double drugExpense;

		void exp() {
			cout << "how much licenseFee : " << endl;
			cin >> licenseFee;
			cout << "how much vetExpense : " << endl;
			cin >> vetExpense;
			cout << "how much foodExpense : " << endl;
			cin >> foodExpense;
			cout << "how much drugExpense : " << endl;
			cin >> drugExpense;
		}

		void sum() {
			totalExpense = licenseFee + vetExpense + foodExpense + drugExpense;
			cout << totalExpense << endl;
		}
};

class pet {
public:
	string owner;
	string name;
	string type;
	int age;

	petBudget annualBudget;
	
	void info() {
		cout << "what is the pet's name?" << endl;
		cin >> name;
		cout << "what is the pet's type?" << endl;
		cin >> type;
		cout << "what is the pet's age?(only Number)" << endl;
		cin >> age;
	}

	void intro() {
		cout << "name : " << name << endl;
		cout << "type : " << type << endl;
		cout << "age : " << age << endl;
		cout << "-------------------------\n" << endl;
	}
	void sound() {
		cout << "Animal Sound" << endl;
	}
};

class dog : public pet {
public:
	void sound() {
		cout << "wuff" << endl;
	}
};

class cat : public pet {
public:
	void sound() {
		cout << "meow" << endl;
	}
};

int main() {
	string household;

	cout << "what is your name (please in put 'Jico' or 'AnySong')" << endl;
	cin >> household;

	if (household.compare("Jico")) {
		dog Connan;
		cat OnePiece;
		Connan.owner = household;
		Connan.info();
		cout << "--------info-------" << endl;
		cout << "owner : " << Connan.owner << endl;
		Connan.intro();

		OnePiece.owner = household;
		OnePiece.info();
		cout << "--------info-------" << endl;
		cout << "owner : " << OnePiece.owner << endl;
		OnePiece.intro();
	}
	else if (household.compare("AnySong")) {
		dog Gundam;
		cat DragBall;
		
		
	
	}
	else {
		cout << "please write again." << endl;
		exit(0); 
	}

	return 0;

}


