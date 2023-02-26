#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int power( int x, int n)
{
	if (n == 0) // Base case
		return 1;
	else
		return x * power(x, n - 1);
}


int main()
{
	string input;
	int x, n;
	cout << "Please enter a number and power you wish to raise it to " << endl;
	getline(cin, input);
	stringstream(input) >> x >> n;

	cout << x << " to the " << n << "th power is " << power(x, n) << endl;

	return 0;
}
