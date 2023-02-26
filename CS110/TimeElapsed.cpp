//Q4 on Finals Lab

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int seconds(int hrs, int min, int sec) {
	int totalSec = 0;
	int hrsSec, minSec;

	hrsSec = 3600 * (hrs % 12);
	minSec = 60 * (min % 60);

	totalSec = hrsSec + minSec + sec;

	return totalSec;
}

int main() {
	string str;
	int h, m, s;
	char a = ':';

	cout << "Enter a time: ";
	getline(cin, str);
	stringstream(str) >> h >> a >> m >> a >> s;

	cout << seconds(h, m, s) << " seconds have passed since the last time the clock struck 12." << endl;

	return 0;
} 
