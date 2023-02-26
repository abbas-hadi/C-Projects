
//HADI ABBAS
// This program takes letters and converts them to phone numbers.
// 09/14/16


#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main() 
{
	
	string userinput;



	cout << "Enter a collection of numbers and letters:  ";
	getline(cin, userinput);

	for (int x = 0; x < userinput.size(); x++)
	{

	

		switch (toupper(userinput.at(x)))
		{
		case 'A' :
		case 'B':
		case 'C':
			cout << "2";
			break;
		case 'D':
		case 'E':
		case 'F':
			cout << "3";
			break;
		case 'G':
		case 'H':
		case 'I':
			cout << "4";
			break;
		case 'J':
		case 'K':
		case 'L':
			cout << "5";
			break;
		case 'M':
		case 'N':
		case 'O':
			cout << "6";
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			cout << "7";
			break;
		case 'T':
		case 'V':
		case 'U':
			cout << "8";
			break;
		case 'X':
		case 'Y':
		case 'Z':
			cout << "9"; 
			break;
		default:
			cout << userinput.at(x);

		}
 
	}




return 0;
}




#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{

	string userinput;
	


	cout << "Enter a collection of numbers and letters:  ";
	getline(cin, userinput);

	for (int x = 0; x < userinput.size(); x++)
	{
		int c = toupper(userinput.at(x));

		if (isalpha(c)) 
		{
			cout << (((c - 'A' ) - (c >= 'S')) / 3 + 2);
		}
		else
		{
			cout << c;
		}
	}

	return 0;
}
