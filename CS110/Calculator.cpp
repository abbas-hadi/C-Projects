// This program is a calculator.

// HADI ABBAS

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	char operation;
	double value1, value2;
	int result = 0;

	cout << "Enter a calculation: " << endl;
	getline(cin, input);
	stringstream(input) >> value1 >> operation>> value2;


	switch (operation)
	{
	case ('+'): cout << value1 + value2 << endl;
		result = value1 + value2;
		cout <<" hex = " << hex << result << endl;
		cout << oct << result << endl;
		break;
	case ('-'): cout << value1 - value2 << endl;
		result = value1 - value2;
		cout << hex << result << endl;
		cout << oct << result << endl; 
		break;
	case ('*'): cout << value1 * value2 << endl;
		result = value1*value2;
		cout << hex << result << endl;
		cout << oct << result << endl;
		break;
	case ('/'): cout << value1 / value2 << endl; 
		result = value1 / value2;
		cout << hex << result << endl;
		cout << oct << result << endl;
		break;
}

	 





	return 0;
}
