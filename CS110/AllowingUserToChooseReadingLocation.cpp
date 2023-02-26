//Relationship between console and file streams
//Hadi Abbas

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

using namespace std;


	//Have to know when file ends and check if file is open first!
	//For console input, user has to terminate and you need to find a way to make this stop.





void printline(istream & st) { 
	//Watch out for letter/typing mistakes
	
	
	getline(cin, st);
	
	//st << "Hello there, how are you" << endl;
}

int main() {
	
	string input;
	
	ifstream of("outfile.txt");


	cout << "Read from a file or from console?" << endl;
	getline(cin, input);

	if (input == "file")
	{
		printline(of); //will read from the file
	}
	else
	{
		printline(cin); //will read to the console
	}
	return 0;
}
