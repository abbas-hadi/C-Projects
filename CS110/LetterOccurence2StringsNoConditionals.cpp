//TRY TO FIGURE OUT UPPERCASE PART

/* SOLVE THIS IN 10 MINUTES!
Complete the code to count the number of occurences of a given character in all the strings with only ONE LOOP, NO CONDITIONAL STATEMENTS
character includes numbers

string s1, s2;
int s1count = 0;
int s2count = 0;
char letter;

input string #1;
input string #2;
input a character;
write your code here;

cout << "count is:" << s1count << " and " <<s2count << endl;

OUTPUT : count is: 3 and 5
*/

//Hadi Abbas
//Strings Finals Lab
#include <string>
#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;


int main() {

	string s1, s2, s3;
	int s1count = 0;
	int s2count = 0;
	char letter;
	cout << "Enter a string: ";
	getline(cin, s1);

	cout << "Enter another string: ";
	getline(cin, s2);

	cout << "Input a character: ";
	getline(cin, s3);
	stringstream(s3) >> letter;

	for (unsigned int i = 0;  i < s1.size() || i < s2.size(); i++) {
	// the correct way to be include isupper
		s1count += (i < s1.size() &&(s1.at(i) == letter));
		//so things will not go out of bounds (the i<s1 or s2. size () )
		s2count += (i < s2.size() &&(s2.at(i) == letter));
		//Short circuit does not need to be in an if statement
	}
	//PROGRAM LOGIC

	//the first part checks for the bound so it doesn't go out of bounds.
	//the second part is only evaluated if the first part is true.
	//if the first part is true and the second part is true (the character is equal to the letter), then the count is added to the result of the boolean expression (true is ALWAYS 1) and (false is 0)
	// if first part is true and second part is false, the counter does not change either. (counter += FALSE (0) = counter)

	cout << "count is: " << s1count << " and " << s2count << endl;

	return 0;
}
