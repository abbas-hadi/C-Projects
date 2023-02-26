
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

void myfunc() {
	static int x = 0;

	cout << ++x << endl;
}

int main() {

	myfunc();
	myfunc();
	myfunc();
	myfunc();


	return 0;
}
