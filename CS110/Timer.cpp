// This program is a clock. 
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include <thread>
#include <ratio>
#include <chrono>
#include <ctime>
using namespace std;

int main()
{
	const int MAX_HOURS = 24;
	const int MAX_MINUTES = 60;
	const int MAX_SECONDS = 60;
	string input;
	int hours, minutes, seconds;

	cout << "Input time on one line like hh:mm:ss ";
	getline(cin, input)
		stringstream(input) >> hours >> ":" >> minutes >> ":" >> seconds;

	for (int hours = 0; hours < MAX_HOURS; hours++)
	{ 
		for (int minutes = 0; minutes < MAX_MINUTES; minutes++)
		{
			for ( int seconds = 0; seconds < MAX_SECONDS; seconds++)
			{
				cout << setw(2) << hours << " : " << setw(2) << minutes << " : " << setw(2) << seconds << '\r';
				this_thread::sleep_for(chrono::seconds(1)); 
			}
		}

}

  
   return 0;
}


// This program is a clock. 
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include <thread>
#include <ratio>
#include <chrono>
#include <ctime>
using namespace std;

int main()
{
	const int MAX_HOURS = 24;
	const int MAX_MINUTES = 60;
	const int MAX_SECONDS = 60;
	string input;
	int hours, minutes, seconds;
	char a = ':'

	cout << "Input time on one line like hh:mm:ss ";
	getline(cin, input);
	stringstream(input) >> hours >>'a' >> minutes >> 'a' >> seconds >> endl;

	for ( ; hours < MAX_HOURS; hours--)
	{ 
		for ( ; minutes < MAX_MINUTES; minutes--)
		{
			for ( ; seconds < MAX_SECONDS; seconds--)
			{
				cout << setw(2) << hours << " : " << setw(2) << minutes << " : " << setw(2) << seconds << '\r';
				this_thread::sleep_for(chrono::seconds(1)); 
			}
		}

}

  
   return 0;
}
