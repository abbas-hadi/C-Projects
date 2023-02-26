//Soccer Scores

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;


struct Player {
	string name;
	int number, goals, p;
	


	void addPoints (int &p) {

		int totalPoints;
		totalPoints += p;
		cout << totalPoints;
	}
};

void printTable(const vector<Player>& vect) {

	cout << "Number     Name     Goals" << endl;

	for (int i = 0; i < vect.size; i++)
	{
		cout << vect.at(i).number << setw(5) << vect.at(i).name << setw(5) << vect.at(i).goals << endl;

	}  
	
	return;
} 



int main() {

	vector <Player> players;

	Player data;
	string name, num, goal;
	int number, goals;

		for (unsigned int i = 0; i < 12; i++)
		{
			cout << "What is the player name? ";
			getline(cin, name);
			data.name = name;

			do {
				cout << "What is his/her number? ";
				getline(cin, num);
				stringstream(num) >> number;
				data.number = number;

				if (number < 0) { cout << "The number must be positive! " << endl; }
			} while (number < 0);

			do {
				cout << "How many goals has he/her scored? ";
				getline(cin, goal);
				stringstream(goal) >> goals;
				data.goals = goals;
				data.addPoints(goals);
				if (goals < 0) { cout << "The number must be positive! " << endl; }

			} while (goals < 0);
			players.push_back(data);
		}

	
}
