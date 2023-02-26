//Hadi Abbas
//Lab: Recursion Display Reverse (11/28/16)

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void reverseDisplay(int value)
{
	if (value < 10) { // Base case
		cout << value << endl;
	}
	else {
		cout << value % 10;
		reverseDisplay(value / 10); //Recursive Call
	}
}


int main()
{
	string input1;
	int input;
	cout << "Enter an integer: ";
	getline(cin, input1);
	stringstream(input1) >> input;
	reverseDisplay(input);

	return 0;
}
