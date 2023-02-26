#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>


using namespace std;
int main()
{
	string s = "dhgtvYaPLoJhMnotk";
	int count = 0;

	//for (char c : s) count += isupper(c);

	//or

	//for (char c : s) count += (c >= 'A' && c <= 'Z');


	cout << count << endl;


	return 0;
}
