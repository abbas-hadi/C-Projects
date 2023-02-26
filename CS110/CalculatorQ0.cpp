//Question 0 Calculator

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
	string str;
	double a, b;
	char oper;

	cout << "Enter a calculation: ";
	getline(cin, str);
	stringstream(str) >> a >> oper >> b;

	switch (oper) {
	case '+':
		cout << str << " = " << a + b << endl;
		break;

	case '-':
		cout << str << " = " << a - b << endl;
		break;

	case '*':
		cout << str << " = " << a * b << endl;
		break;

	case '/':
		cout << str << " = " << a / b << endl;
		break;

	default :
		cout << "Wrong operation" << endl;
	}


}
