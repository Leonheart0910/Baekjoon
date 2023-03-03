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
			cout << "how much licenseFee($) : ";
			cin >> licenseFee;
			cout << "how much vetExpense($) : ";
			cin >> vetExpense;
			cout << "how much foodExpense($) : ";
			cin >> foodExpense;
			cout << "how much drugExpense($) : ";
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
	string household1, household2;

	cout << "write down two households(please in put only 'Jico' and 'AnySong')" << endl;
	cin >> household1 >> household2;

	if (!(household1.compare("Jico")) && !(household2.compare("AnySong"))) {
		dog Connan;
		cat OnePiece;
		Connan.owner = household1;
		Connan.info();
		cout << "--------info-------" << endl;
		cout << "owner : " << Connan.owner << endl;
		Connan.intro();
		Connan.sound();
		cout << endl;

		Connan.annualBudget.exp();
		Connan.annualBudget.sum();

		cout << Connan.name << "'s total expense is : " << Connan.annualBudget.totalExpense << " ($)" << endl;
		cout << endl;

		OnePiece.owner = household1;
		OnePiece.info();
		cout << "--------info-------" << endl;
		cout << "owner : " << OnePiece.owner << endl;
		OnePiece.intro();
		OnePiece.sound();
		cout << endl;

		OnePiece.annualBudget.exp();
		OnePiece.annualBudget.sum();

		cout << OnePiece.name << "'s total expense is : " << OnePiece.annualBudget.totalExpense << " ($)"<<endl;
		cout << endl;


		dog Gundam;
		cat DragBall;

		Gundam.owner = household2;
		Gundam.info();
		cout << "--------info-------" << endl;
		cout << "owner : " << Gundam.owner << endl;
		Gundam.intro();
		Gundam.sound();
		cout << endl;

		Gundam.annualBudget.exp();
		Gundam.annualBudget.sum();

		cout << Gundam.name << "'s total expense is : " << Gundam.annualBudget.totalExpense << " ($)"<< endl;
		cout << endl;

		DragBall.owner = household2;
		DragBall.info();
		cout << "--------info-------" << endl;
		cout << "owner : " << DragBall.owner << endl;
		DragBall.intro();
		DragBall.sound();
		cout << endl;

		DragBall.annualBudget.exp();
		DragBall.annualBudget.sum();

		cout << DragBall.name << "'s total expense is : " << DragBall.annualBudget.totalExpense << " ($)"<<endl;
		cout << endl;
	
		cout << "so," << endl;
		cout << household1 << " : " << Connan.annualBudget.totalExpense + OnePiece.annualBudget.totalExpense << " ($)" << endl;
		cout << household2 << " : " << Gundam.annualBudget.totalExpense + DragBall.annualBudget.totalExpense << " ($)" << endl;

	

	}
	else {
		cout << "please write again." << endl;
		exit(0);
	}
	return 0;

}


