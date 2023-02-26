// Programming Challenge 8/29/2016
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string name = 0;
	char letter = 0;
	double number = 0;
	char symbol = 0;
	string letter_number_symbol = 0;

	cout << "What is your name? :";     // John Doe
	getline(cin, name); 
	
	cout << "OK " << name << ", please input a letter, number, and a symbol separated by a space: ";     // B 175 #
	getline(cin, letter_number_symbol);
	stringstream(letter_number_symbol);
	cout << "\n\nOutput succeeded.";

	cout << name << "- Character Formatting" << endl;

	cout << setw(15) << letter  << setw(15) << number << setw(15) << symbol << endl;
	cout << setfill ("-")<< setw (53) << endl;
	cout << endl << "Decimal" << static_cast <int> (letter);
	cout << "Hex" << endl;
	cout << "Octal" << endl;
	cout << "Binary" << endl;
	
	showbase 
	
	
	return 0;
}
