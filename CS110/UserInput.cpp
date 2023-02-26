// This program tests whether or not an initialized value
// is equal to a value input by the user 

// Hadi Abbas

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main( )
{
	int num1,num2;	
	string input1, input2;

    cout << "Please enter an integer" << endl;
	getline(cin, input1);
	stringstream(input1) >> num1;

	cout << "Please enter another integer (it can be the same one)" << endl;
	getline(cin, input2);
	stringstream(input2) >> num2;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2)
	{
		cout << "The values are the same." << endl;
		cout << "Hey, that's  a coincidence!" << endl;
	}
	else
	{
		cout << "The values are not the same" << endl;
	}
    return 0;	
}








//  This program prints "You Pass" if a student's average is
//  60 or higher and prints "You Fail" otherwise

// Hadi Abbas

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    
    float average;
    string input;
    
    cout << "Input your average:" << endl;
    getline(cin, input);
    stringstream(input) >> average;
    
    if (100 < average || 0 > average)
    {   cout << "Invalid Data" << endl;
    }
    else if (100 >= average && 90 <= average)
    {   cout << "A" << endl;
    }
    else if (90 > average && 80 <= average)
    {   cout << "B" << endl;
    }
    else if (80 > average && 60 <= average)
    {   cout << "You Pass" << endl;
    }
    else
    {   cout << "You Fail" << endl;
    }
    return 0;
}
