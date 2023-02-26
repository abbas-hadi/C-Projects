#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

string encryption (string& s)
{ 
	//string newString;
	for (unsigned int i = 0; i < s.size(); i++) {
		//s.at(i) += 10;
		for (unsigned int j = 1; j < 11; j++) {
			if (isalpha(s.at(i) + j)) {
				s.at(i) = 65;
			}
		}
		s.at(i) += 10;
	}
	return s;
}

string decryption (string s)
{
	string newString;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		s.at(i) -= 10;
	}

	return s;
}


int main (){

	string input, message, str, key, operation;
	cout << "Enter a message, string, key and operation (encryption or decryption): ";
	getline(cin, input);
	stringstream(input) >> message >> str >> key >> operation;

	if operation = "encryption"

	cout << encryption(input) << endl;
	cout << decryption(input) << endl;

	return 0;
}
