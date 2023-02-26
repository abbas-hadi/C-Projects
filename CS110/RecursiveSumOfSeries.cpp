//Hadi Abbas
//Lab: Recursion Series Sum (11/28/16)

#include <iostream>

using namespace std;

double series(int i)
{
	if (i == 1) // Base case
		return (1.0 / 3.0);
	else
		return series(i-1) + (i  / (2.0 * i + 1.0));
}


int main()
{
	for (int i = 1; i <= 10; i++)
	cout << "The series sum at index series " << i << " is " << series (i) << endl;

	return 0;
}	
