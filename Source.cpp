#include <iostream>
#include <string>
using namespace std;

class Calculations {
public:
	void Addition() {
		int FirstNumber = 0;
		int SecondNumber = 0;
		int Answer = 0;
		cout << "Number 1: ";
		cin >> FirstNumber;
		cout << "Number 2: ";
		cin >> SecondNumber;
		Answer = FirstNumber + SecondNumber;
		cout << Answer << endl;
	}
	void Subtraction() {
		int FirstNumber = 0;
		int SecondNumber = 0;
		int Answer = 0;
		cout << "Number 1: ";
		cin >> FirstNumber;
		cout << "Number 2: ";
		cin >> SecondNumber;
		Answer = FirstNumber - SecondNumber;
		cout << Answer << endl;
	}
	void Multiplaction() {
		int FirstNumber = 0;
		int SecondNumber = 0;
		int Answer = 0;
		cout << "Number 1: ";
		cin >> FirstNumber;
		cout << "Number 2: ";
		cin >> SecondNumber;
		Answer = FirstNumber * SecondNumber;
		cout << Answer << endl;
	}
	void Divison() {
		int FirstNumber = 0;
		int SecondNumber = 0;
		int Answer = 0;
		cout << "Number 1: ";
		cin >> FirstNumber;
		cout << "Number 2: ";
		cin >> SecondNumber;
		Answer = FirstNumber / SecondNumber;
		cout << Answer << endl;
	}
};

int main() {
	Calculations Calculations;
	string Calculation = "0";
	cout << "Addition, Subtraction, Multiplaction or Division ";
	cin >> Calculation;
	if (Calculation == "Addition") {
		Calculations.Addition();
	}
	else if (Calculation == "Subtraction") {
		Calculations.Subtraction();
	}
	else if (Calculation == "Multiplaction") {
		Calculations.Multiplaction();
	}
	else if (Calculation == "Division") {
		Calculations.Divison();
	}
	system("pause");
	return 0;
}
