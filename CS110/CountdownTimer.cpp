// This program is a clock.
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include <thread>
#include <chrono>

using namespace std;

int main()
{
    const int MIN_HOURS = 0;
    const int MIN_MINUTES = 0;
    const int MIN_SECONDS = 0;
    string input;
    int hours, minutes, seconds;
    char a;
    
    cout << "Input time on one line in the format hh:mm:ss: ";
    getline(cin, input);
    stringstream(input) >> hours >> a >> minutes >> a >> seconds;   //Look this up
    
    for ( ; hours >= MIN_HOURS; hours--)
    {
        for ( ; minutes >= MIN_MINUTES; minutes--)
        {
            for ( ; seconds >= MIN_SECONDS; seconds--)
            {
                cout << setw(2) << hours << " : " << setw(2) << minutes << " : " << setw(2) << seconds << '\r';
                this_thread::sleep_for(chrono::seconds(1)); 
            }
        }
        
    }
    
    
    return 0;
}


// This program is a countdown timer using one loop.
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include <thread>
#include <chrono>

using namespace std;

int main()
{
    const int MIN_HOURS = 0;
    const int MIN_MINUTES = 0;
    const int MIN_SECONDS = 0;
    string input;
    int hours, minutes, seconds;
    char a;
    
    cout << "Input time on one line in the format hh:mm:ss: ";
    getline(cin, input);
    stringstream(input) >> hours >> a >> minutes >> a >> seconds;   //Look this up
    
    for ( ; hours >= MIN_HOURS && minutes >= MIN_MINUTES && seconds > MIN_SECONDS; seconds --)
    {
        cout << setw(2) << hours << " : " << setw(2) << minutes << " : " << setw(2) << seconds << '\r';
        this_thread::sleep_for(chrono::seconds(1));
        
        ;
    }
    cout << "Time's up!!!" << endl;

    return 0;
}
