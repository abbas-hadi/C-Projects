// This program will read in the qunatity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// HADI ABBAS

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
	ifstream dataIn;		// defines an input stream for a data file
	ofstream dataOut;		// defines an output stream for an output file
	int quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float  totalBill;		// contains the total bill.  The price of all items

	dataIn.open("transaction.dat");  // This opens the file.
	if (!infile) 
	{
		cout << "Error: File did not open correctly!";
	}
	dataOut.open("bill.out");
	if (!outfile)
	{
		cout << "Error: File did not open correctly!";
	}

	// Fill in the appropriate code in the blank below
	outfile << setprecision(2) << fixed << showpoint;  // formatted output

	
	infile << quantity << itemPrice;							//ADD WHILE LOOP SOMEWHERE and edit more than what the program tells you!
											 // Fill in the input statement that brings in the 
														 // quantity and price of the item.

														 // Fill in the assignment statement that determines the totalbill.

		myfile << 												 // Fill in the output statement that prints the total bill, with a label,
														 // to an output.


	return 0;
}
