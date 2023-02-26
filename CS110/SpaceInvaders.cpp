  #include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include <string>
#include "gotoxy.h"
#include "windows.h"
using namespace std;


const char BOUNDARY = '#', OBSTACLE = 'x', YOU = '^', BULLET = '!', ALIEN = 'A';
const int NUM_ALIENS = 5;

void clearScreen(void) {
	system("cls");
}

struct ALIENS {
	unsigned int x, y;
};

void displayVectorMap(vector<string> &createMap) {
	for (unsigned int i = 0; i < createMap.size(); i++) {
		cout << createMap[i] << endl;
	}
}

bool loadVector(vector<string> &createMap, string inputMap) {
	ifstream map(inputMap);
	string data;
	bool flag = true;
	if (map) {
		while (getline(map, data)) {
			createMap.push_back(data);
		}
	}
	else {
		cout << "File does not exist. Please input another file: ";
		flag = false;
	}
	map.close();
	return flag;
}

string askForMap() {
	string map;
	cout << "Please input a map: ";
	getline(cin, map);
	return map;
}

bool moveTo(vector<string> &map, vector<ALIENS> &INVADER, bool &marker, unsigned int y, unsigned int x, unsigned int old_y, unsigned int old_x, int &count, bool &game_running) {
	ALIENS nxtalien;
	bool flag = true;
	if (map[y].at(x) == BOUNDARY) {
		flag = false;
	}
	else if (map[y].at(x) == OBSTACLE) {
		map[y].at(x) = ' ';
		nxtalien.x = x;
		nxtalien.y = y;
		INVADER.push_back(nxtalien);
		count++;
		marker = false;
	}
	else if (map[y].at(x) == ALIEN) {
		game_running = false;
	}
	else {
		gotoxy(old_x, old_y);
		cout << ' ';
		map[old_y].at(old_x) = ' ';
	}

	return flag;
}

void moveInvaders(vector<string> &map, string inputMap, vector<ALIENS> &INVADERS, bool &marker, unsigned int y, unsigned int x, unsigned int old_y, unsigned int old_x, int &count, bool &game_running)
{
	bool flag = true;
	int count = 0;
	for (unsigned int i = 1; i <= NUM_ALIENS; i++) {
		for (unsigned int j = 1; j <= NUM_ALIENS; j++) {
			//INVADERS.push_back();
			if (map[y].at(x) == BOUNDARY) {
				INVADERS[i - 1] = INVADERS[i];
				count++;

				if (!(count%3)){
					y ++ ;
			}
		}



	}
	/*	bool flag = true;
		if (map[y].at(x) == BOUNDARY) {
			flag = false;
		}
		else if (map[y].at(x) == OBSTACLE) {
			map[y].at(x) = ' ';
			nxtalien.x = x;
			nxtalien.y = y;
			INVADERS.push_back(nxtalien);
			count++;
			marker = false;
		}

	}
}
void makeADJ(vector<ALIENS> &INVADER, bool marker) {
	if (marker) {
		for (unsigned int i = 1; i <= NUM_ALIENS; i++) {
			INVADER[i - 1] = INVADER[i];
		}
	}
}

int main()
{
	vector<string> createMap;
	vector<ALIENS> INVADER;
	string map;
	bool flag = true;
	do {
		map = askForMap();
		flag = loadVector(createMap, map);
	} while (!flag);
	clearScreen();
	displayVectorMap(createMap);

	int count = 0;
	bool game_running = true;
	ALIENS alien;
	alien.x = 1;
	alien.y = 1;
	INVADER.push_back(alien);
	do {
		for (unsigned int i = 0, c = 1; i < INVADER.size(); i++, c++) {
			gotoxy(INVADER[INVADER.size() - c].x, INVADER[INVADER.size() - c].y);
			createMap[INVADER[INVADER.size() - c].y].at(INVADER[INVADER.size() - c].x) = PAC;
			cout << PAC;
		}

		bool marker = true;
		system("pause>nul");

		if (GetAsyncKeyState(VK_DOWN) && moveTo(createMap, INVADER, marker, INVADER[INVADER.size() - 1].y + 1, INVADER[INVADER.size() - 1].x, INVADER[0].y, INVADER[0].x, count, game_running)) {
			makeADJ(INVADER, marker);
			if (marker) {
				INVADER[INVADER.size() - 1].y++;
			}
		}
		else if (GetAsyncKeyState(VK_UP) && moveTo(createMap, INVADER, marker, INVADER[INVADER.size() - 1].y - 1, INVADER[INVADER.size() - 1].x, INVADER[0].y, INVADER[0].x, count, game_running)) {
			makeADJ(INVADER, marker);
			if (marker) {
				INVADER[INVADER.size() - 1].y--;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT) && moveTo(createMap, INVADER, marker, INVADER[INVADER.size() - 1].y, INVADER[INVADER.size() - 1].x + 1, INVADER[0].y, INVADER[0].x, count, game_running)) {
			makeADJ(INVADER, marker);
			if (marker) {
				INVADER[INVADER.size() - 1].x++;
			}
		}
		else if (GetAsyncKeyState(VK_LEFT) && moveTo(createMap, INVADER, marker, INVADER[INVADER.size() - 1].y, INVADER[INVADER.size() - 1].x - 1, INVADER[0].y, INVADER[0].x, count, game_running)) {
			makeADJ(INVADER, marker);
			if (marker) {
				INVADER[INVADER.size() - 1].x--;
			}
		}
		else if (GetAsyncKeyState(VK_ESCAPE)) {
			game_running = false;
		}

		gotoxy(0, createMap.size() + 2);
		cout << "Bites: " << count;


	} while (game_running == true);

	clearScreen();
	cout << "GAME OVER" << endl;

	return 0;
}
