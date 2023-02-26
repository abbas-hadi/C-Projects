
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;
const string SIGNATURE = "my compression program";

void print(ostream &out, int ln, string line) {
	//out << “LINE  DATA” << endl;
	out << setw(4) << ln << "  " << line << endl;;
}

void splitName(string &filename, string &ext) {
	size_t pos = filename.find_last_of('.');
	if (pos != string::npos) {
		ext = filename.substr(pos);
		//filename = filename.substr(0, pos);
		filename.resize(pos);
	}
}

void compress(string filename) {
	string ext, s;
	ifstream inFile(filename);
	ofstream outFile;
	splitName(filename, ext);
	filename += ".RLE";
	outFile.open(filename);
	if (outFile && inFile) { //checking if files are open
		outFile << SIGNATURE << endl; //type signature onto first line of file
		while (getline(inFile, s)) { //used until file reaches end
			int count = 1;
			char mychar = 0;
			for (char c : s) {
				if (c == mychar) { //if character is changed, write everything out
					count++;
				}
				else {
					if (mychar != 0) { //either the very first iteration or the character has been changed
						outFile << mychar << count;
						count = 1;
					}
					mychar = c;
				}
			}
			outFile << mychar << count << endl;

			/*for (int i = 0; i < s.size(); i+= count) {
				char c = s.at(i);
				count = 0;
				for (int j = i; c == s.at(j) && j < s.size(); j++) {
					count++;
				}

				//You could have used findfistnotof and subtract it from one position and the other position to get the count




				outFile << c << count;
			} */
		}
		outFile.close();
		inFile.close();
	}
}


bool decompress(string filename) {
	bool flag = true;
	string ext, s;
	ifstream inFile(filename);
	ofstream outFile;
	splitName(filename, ext);

	compress(filename);

	if (filename == (filename += ".RLE")) {
		cout << "File " << filename << " found, decompressing to " << filename << ".DEC" << endl << endl;

	}


	if (ext == ".RLE" || ext == ".txt") {
		filename += ".DEC";
		outFile.open(filename);
		if (inFile && outFile) {
			string s;
			getline(inFile, s); //reads the first line
			if (s == SIGNATURE) {
				// i have the files and they are open. now read with getline
				int count = 0;
				while (getline(inFile, s)) {
					string newline;
					stringstream ss(s);
					char c;
					int n;
					while (ss >> noskipws >> c >> n) {
						newline.append(n, c);
					}
					//cout << newline << endl;
					print(cout, ++count, newline);
					print(outFile, count, newline);
				}
			}
			else
			{
				cout << "not my file" << endl;
				flag = false;
			}
		}
		else {
			flag = false;
		}
		return flag;
	}
}

int main()
{
	string s, filename;
	char choice = 0;
	bool flag = true;

	do {
		cout << "Welcome to RLE compression, please input original file name:  ";
		getline(cin, filename);

		cout << "Operation:" << endl;
		cout << "   1- Compress file" << endl;
		cout << "   2- Decompress file" << endl;
		cout << ">> ";
		getline(cin, s);
		stringstream(s) >> choice;

		// Do checking for correct input

		switch (choice) {
		case '1': 
			compress(filename);
			break;
		case '2': 
			flag = decompress(filename);
			break;
		default:
			cout << "Wrong operation";
		}
	} while (!flag);
	return 0;
}
