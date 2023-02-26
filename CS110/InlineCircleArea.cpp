//Write a C++ program that prompts the user for the radius of a circle, then calls inline function circleArea to calculate the area of that circle

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

const double PI = 3.14;

inline void calcArea(double radius) {
	double area;
	area = PI * pow(radius, 2.0);

	cout << "The area is: " << area << endl;

	return;
}

int main() {
	string rad = "";
	double radius = 0;

	cout << "Enter a radius: ";
	getline(cin, rad);
	stringstream(rad) >> radius;

	calcArea(radius);

	return 0;
}
