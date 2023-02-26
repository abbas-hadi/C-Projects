//Hadi Abbas
//10/12/16


#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

#include <fstream>

using namespace std;



void AddToList(vector <string> &original)
{
	string userChoice;

	cout << "Please add an item on the To Do list " << endl;
	getline(cin, userChoice);

	original.push_back(userChoice);
}

void ShowNextItem(vector <string> &original)
{
	if (original.size() > 0)
	{
		cout << "The next item on the To Do List is " << endl;
		cout << original.at(0) << endl;
	}
	else
	{
		cout << "There is nothing in your list. Please add items to your list." << endl;
	}
}

void DoThis(vector <string> &original)
{
	if (original.size() > 0)
	{
		cout << "OK, time to do this list item: " << endl;
		cout << original.at(0) << endl;
		original.erase(original.begin());
	}
	else
	{
		cout << "There is nothing in your list. Please add items to your list." << endl;
	}
}

void ListAllItems(vector <string> &original)
{
	if (original.size() > 0)
	{
		cout << "Your list: " << endl;
		for (unsigned int i = 0; i < original.size(); i++)
		{
			cout << original.at(i) << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "There is nothing in your list. Please add items to your list." << endl;
	}
}

void Save(vector <string> &original)
{
	string userInput;
	ofstream saveFile;

	cout << "Input the name of the file you wish to save your list to: " << endl;
	getline(cin, userInput);
	saveFile.open(userInput, ios::app);
		
	if(saveFile)
		{
			for (unsigned int i = 0; i < original.size(); i++)
			{
				saveFile << "  " <<original.at(i)  << endl;
			}
		}
	else
	{
		cout << "Invalid file name! Try again." << endl;
	}
		
	saveFile.close();
}

void Load(vector <string> &original)
{
	string userInput, line;
	fstream loadFile;

	cout << "Input the name of the file you wish to load your list from: " << endl;
	getline(cin, userInput);
	loadFile.open(userInput);

	if (loadFile)
	{
		while ( getline (loadFile, line))
		{
			cout << line << endl;

			original.push_back(line);
		}
	}
	else
	{
		cout << "Invalid file name! Try again." << endl;
	}

	loadFile.close();

}

int main()
{
	string input;
	int choice;

	vector <string> list;

	do
	{

		cout << "What to do?" << endl;
		cout << "1 Add to the List" << endl;
		cout << "2 Show the next item on the list" << endl;
		cout << "3 Do the next item on the list and remove it" << endl;
		cout << "4 List all items" << endl;
		cout << "5 Save list" << endl;
		cout << "6 Load list" << endl;
		cout << "7 All done with this To Do list!"<< endl;
		cout <<" ==> ";

		getline(cin, input);
		stringstream(input)>> choice;

		switch (choice)
		{
		case 1: AddToList(list);
			break;
		case 2: ShowNextItem(list);
			break;
		case 3:DoThis(list);
			break;
		case 4: ListAllItems(list);
			break;
		case 5: Save(list);
			break;
		case 6: Load(list);
			break;
		case 7: cout << "Goodbye for now." << endl;
			choice = 0;
			break;
		default: cout << "Invalid Input. Please select a valid input value from 1 to 7" << endl;

		}
	} while (1 <= choice && 7 >= choice);

	
	return 0;
}
