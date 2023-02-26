
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

void myfunc() {
	static int x = 0;

	cout << ++x << endl;
}

int main() {

	string s = "hello there 1234 how Are you Doing? are you ok? i am fine and blah blah blah blah blah";

	vector <int> counter(26);  //preallocate vector size because you’re using it as counter

	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s.at(i))) {
			counter.at(toupper(s.at(i)) - 'A')++;
		}
	}

	for (int i = 0; i < counter.size(); i++) {
		cout << counter.at(i) << " ";
	}
	cout << endl;

	return 0;
}
