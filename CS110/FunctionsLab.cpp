/*
Name: Hadi Abbas
Lab: Functions Part - 1

Date: 09/28/16 */


1. showValue (5);

2. double half (double number)
   {
	return number/2.0;
   }

3. result = cube (4);

4. void timesTen (double number)
   {
	cout << number * 10;
   }

5. display (age, income, initial);

6)
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void getNumber(int &num)
{
	string input;
	int userInput;

	do
	{
		cout << "Enter a number from 1 to 100: ";
		getline(cin, input);
		stringstream(input) >> userInput;
	}

	while (!(1 <= userInput && 100 >= userInput));

	num = userInput;
	return;
}


int main()
{
	int num;
	getNumber(num);


	return 0;
}
