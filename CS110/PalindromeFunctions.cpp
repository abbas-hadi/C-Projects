/* Palindrome 
Hadi Abbas
09/28/16
Lab- Functions part 2- Palindrome Integer*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int reverse(int number)
{	
	int reverse2 = 0;
	while (number = 0) 
	{
		int remainder = number % 10;
		reverse2 = reverse2 * 10 + remainder;
		number /= 10;
	}
	return reverse2;
}

bool isPalindrome(int number)
{
	if (number == reverse(number))
	{
		return (number == reverse(number));
	}
}

int main()
{
	string input;
	int userInteger;
	cout << "Enter an integer: ";
	getline(cin, input);
	stringstream(input) >> userInteger;

	isPalindrome(userInteger);

	if (isPalindrome)
	{
		cout << userInteger << " is a palindrome!" << endl;
	}
	
}
