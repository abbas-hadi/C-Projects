#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Student {
	int id;
	string name, address;
	double GPA;

	~Student() {
		cout << "goodbye STUDENT " << name << endl << endl;
	}

	Student(int i, string n, string a, double G) {
		cout << "CONSTRUCTOR " << n << endl;
		id = i;
		name = n;
		address = a;
		GPA = G;
	}

	void print() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Address: " << address << endl;
		cout << "GPA: " << GPA << endl;

	}

};




int main() {
	//Student s3;
	Student s1  { 1, "Bill", "somewhere", 3.1 };
	{Student s2{ 2, "Sam", "nowhere", 2.5 };
	}
	
	//s2.print();
	return 0;
}
