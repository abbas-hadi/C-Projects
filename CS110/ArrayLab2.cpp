// This program will read in a group of test scores( positive integers from 1 to 100)
// from the keyboard and then calculates and outputs  the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Hadi Abbas

#include <iostream>
#include <string> 
#include <sstream>
#include <fstream>
using namespace std;




//****************************************************************************
//                                 findAverage
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the average of the numbers in the array
// data in:       array of floating point numbers
// data returned: avarage of the numbers in the array
//
//****************************************************************************

double findAverage(int array[], int size)

{

	double sum = 0;   // holds the sum of all the numbers
					  //int pos = 0;
					  //if (array[pos] != -99)
	{

		for (int pos = 0; pos < size && (array[pos] != -99); pos++)
		{

			sum += array[pos];
		}
	}
	return (sum / size);  //returns the average

}

//****************************************************************************
//                                 findHighest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the highest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************

int   findHighest(const int array[], int size)

{

	// Fill in the code for this function

	int pos;
	int max;
	max = array[0];

	for (pos = 0; pos < size; pos++)
	{
		if (array[pos] > max)
		{
			max = array[pos];
		}
	}



	return max;
}


//****************************************************************************
//                                 findLowest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the lowest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************

int   findLowest(const int array[], int size)

{
	// Fill in the code for this function

	int pos;
	int min;
	min = array[0];


	for (pos = 0; pos < size; pos++)
	{
		if (array[pos] < min)
		{
			min = array[pos];
		}


	}

	return min;
}

int main()
{
	const int ARRAY_SIZE = 100;
	int GradeType[ARRAY_SIZE] = {};


	int  numberOfGrades;				   // the number of grades read.
	int pos;							   // index to the array.
	string input;


	double avgOfGrades;					   // contains the average of the grades.
	int highestGrade;					   // contains the highest grade.
	int lowestGrade;					   // contains the lowest grade.

	pos = 0;
	
	
	stringstream(input) >> GradeType[pos];

	ifstream gradeFile;
	gradeFile.open("gradfile.txt");
	if (!gradeFile)
	{
		cout << "File could not be opened" << endl;
	}

	else
	{

		while (getline (gradeFile, input))
		{

			pos++;
			stringstream(input) >> GradeType[pos];    // Fill in the code to read the grades

		}
	}
	numberOfGrades = pos;  // Fill blank with appropriate identifier

						   // call to the function to find average

	avgOfGrades = findAverage(GradeType, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;


	//  Fill in the call to the function that calculates highest grade

	highestGrade = findHighest(GradeType, numberOfGrades);
	cout << endl << "The highest grade is " << highestGrade << endl;


	// Fill in the call to the function that calculates lowest grade

	lowestGrade = findLowest(GradeType, numberOfGrades);
	// Fill in code to write the lowest to the screen

	cout << endl << "The lowest grade is " << lowestGrade << endl;

	return 0;
}
