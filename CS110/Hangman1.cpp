#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
#include <fstream>
#include <ctime>
#include <random>
#include "windows.h"

using namespace std;

string chooseWord() {
	string word = " ";
	string line = " ";
	ifstream common;
	common.open("CommonWords.txt");

	if (common) {
		int count = 0;
		
		while (getline(common, line)) {
			count++;
		}

		random_device rd;   
		default_random_engine generator (rd());
		uniform_int_distribution<int> distribution(0,count); 
		int dice_roll = distribution(generator);  
		cout << dice_roll << endl;
		common.seekg(0, common.end);
		dice_roll = common.tellg();
		common.seekg(0, common.beg);

	}

	common.close();
	word = line;
	cout << word << endl;
	return word;
}

void drawDash(string s) {
	for (unsigned int i = 0; i < s.size(); i++) {
		cout << " _ ";
	}
	cout << endl << endl;
}

void checkLetter(string s,char c) {
	
}

void guessLetter(const string& s) {
	string input;
	char letter;

	cout << "Guess a letter: ";
	getline(cin, input);
	stringstream(input) << letter;

	checkLetter(s, letter);

}

void drawMan() {
	cout << endl << endl
		<< "   +----+     " << endl
		<< "   |    |     " << endl
		<< "   |    O     " << endl
		<< "   |   /|\\   " << endl
		<< "   |   / \\   " << endl
		<< "   |Your Dead " << endl
		<< "  ============" << endl << endl;
}



int main() {

	drawDash(chooseWord());



	return 0;
}
