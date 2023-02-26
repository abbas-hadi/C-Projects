//Hadi Abbas
//Scores Program - Finals Review
//Write a program with scores inputted on one line
//Print out scores with first decimal point and add them up


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;


struct Player {
    string name;
    double score;
};


int main() {
    string input, name = "";
    double score = 0, sum=0;
    Player p1;
    
    
    vector <Player> Info;
    
    
    
    
    cout << "Enter player names and scores separated by spaces: ";
    getline(cin, input);
    
    
    
    
    stringstream ss(input);
  
    
    while (ss>> name >> score) {
        p1.name = name;
        p1.score = score;
        Info.push_back(p1);
    }
    
    
    cout << endl;
    
    
    for (unsigned int i = 0; i < Info.size(); i++)
    {
   /*     str = to_string(Info.at(i).score);
        str2 = str.substr(0, str.find(".") + 2);
        cout << Info.at(i).name << " ";
        cout << str2 << endl;
        str3 += str2; */
        cout << Info.at(i).name << " " << static_cast<double>(static_cast<int>(Info.at(i).score*10))/10 << endl;
        sum += static_cast<double>(static_cast<int>(Info.at(i).score*10))/10;
    }
    
    cout << "The sum of the scores is " << sum << endl;
    cout << endl;
    
    return  0;
}
