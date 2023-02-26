//One Time Pad due Wednesday 11/9
//Write on one line of code?

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string messageToString(ifstream inFile) {
	string newstring;


	return newstring;
}

int main() {
	ifstream inFile, keyFile;
	ofstream messageFile;
	string fname, kname, outputName;
	cout << "Please enter a filename of the message to encrypt: ";
	getline(cin, fname);
	ifstream inFile(fname);

	if (inFile) {
		string read;
		while (getline(inFile, read)) {
			messageToString(inFile);
		}
	}
	else {
		cout << "Unable to open file..." << endl;
	}

	cout << "Enter the file name you wish to use as the key: ";
	getline(cin, kname);
	ifstream keyFile(kname);

	if (inFile) {
		string read;
		while (getline(keyFile, read)) {
		}
	}
	else {
		cout << "Unable to open file..." << endl;
	}

	cout << "Enter the file you wish to output to: ";
	getline(cin, outputName);
	ifstream messageFile(outputName);

/*	if (inFile) {
		string read;
		while (getline(messageFile, read)) {
		}
	}
	else {
		cout << "Unable to open file..." << endl;
	}

	*/
	
	return 0;
}
