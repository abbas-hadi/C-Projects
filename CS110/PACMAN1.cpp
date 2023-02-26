#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

const char FOOD = 'x';
const char PACMAN = '@';
const char WALL = '#';


struct walk {
	int walk_count;
	int x;
	int y;
	int back;
};

//struct target {
//	short x;
//	short y;
//};


void clearScreen(void) {
	system("cls");
}


BOOL gotoxy(const WORD x, const WORD y) {
	COORD xy;
	xy.X = x;
	xy.Y = y;
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

vector <string> load() {
	ifstream infile;
	vector <string> map;
	string name, line;
	bool flag = true;

	do {

		cout << "Enter a file name: ";
		getline(cin, name);

		infile.open(name);

		if (infile)
		{
			while (getline(infile, line)) {
				map.push_back(line);
			}
			flag = true;
		}

		else {
			flag = false;
			cout << "File could not be loaded" << endl;
		}
	} while (!flag);

	infile.close();
	
	for (int i = 0; i < map.size(); i++)
	{
			cout << map.at(i)<< ' ';
			cout << endl;
	}
	return map;
}

bool moveTo(int x, int y, vector <string> &map) {
	bool success = true;
	int count = 0;


	if (!((x, y) = '#')) {
		success = true;
		if ((x, y) = FOOD)
		{
			count++;
		}
		map.at(x).at(y) = PACMAN;
	}

	return success;
}

int main() {

	int x = 1;
	int y = 1;
	int count = 0;
	bool game_running = true;
	vector <string> map;
	map = load();
	
	do {
		gotoxy(0, 0);




		system("pause>nul");

		if (GetAsyncKeyState(VK_DOWN)) && canMove (x, y,  {

			moveTo(x, y, 0, 1, map);
			
		}

		else if (GetAsyncKeyState(VK_UP)) {
			moveTo(x, y, 0, -1 ,map);
		}

		else if (GetAsyncKeyState(VK_RIGHT)) {
			moveTo(x, y, 1, 0, map);
		}

		else if (GetAsyncKeyState(VK_LEFT)) {
			moveTo(x, y, -1, 0, map);
		}

		else (GetAsyncKeyState(VK_ESCAPE)) {
			game_running = false;
		}

	} while (game_running == true); 

	system("cls");
	cout << "GAME OVER";



	return 0;
}
