// ch10testScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function prototypes
void getTestScores(double[], double);
double calcAverage(double[], double);
void displayResults(double[], double, double);
void getLetterGrade(double);
int size = 6;
double testScores[6];
double average;

int main()
{
    cout << "Chapter 10 Test Scores by Kevin Bell\n\n";
	cout << "Enter 6 test scores: \n";
	getTestScores(testScores, 6);
	average = calcAverage(testScores, 6);
	displayResults(testScores, 6, average);
	getLetterGrade(average);
	system("pause");
	return 0;
} // end main

// Function definitions
// get 6 test scores from user
void getTestScores(double testScores[], double size)
{
	//input validation
	for (int i = 0; i < size; i++)
	{
		cout << "Test score " << i + 1 << ": ";
		cin >> testScores[i];
		while (testScores[i] < 0 || testScores[i] > 100)
		{
			cout << "Invalid test score. Enter a test score between 0 and 100: ";
			cin >> testScores[i];
		} // end while loop
	} // end for loop
} // end getTestScores

// calculate average of test scores
double calcAverage(double testScores[], double size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += testScores[i];
	}
	return total / size;
} // end calcAverage

// display test scores and average
void displayResults(double testScores[], double size, double average)
{
	cout << "\nTest scores: \n";
	for (int i = 0; i < size; i++)
	{
		cout << testScores[i] << "  ";
	}
	cout << "\nAverage: " << average << endl;
} // end displayResults

// display letter grade with A- B+ etc.
void getLetterGrade(double average)
{
	if (average >= 93)
	{
		cout << "Letter grade: A" << endl;
	}
	else if (average >= 90)
	{
		cout << "Letter grade: A-" << endl;
	}
	else if (average >= 87)
	{
		cout << "Letter grade: B+" << endl;
	}
	else if (average >= 84)
	{
		cout << "Letter grade: B" << endl;
	}
	else if (average >= 80)
	{
		cout << "Letter grade: B-" << endl;
	}
	else if (average >= 77)
	{
		cout << "Letter grade: C+" << endl;
	}
	else if (average >= 74)
	{
		cout << "Letter grade: C" << endl;
	}
	else if (average >= 70)
	{
		cout << "Letter grade: C-" << endl;
	}
	else if (average >= 67)
	{
		cout << "Letter grade: D+" << endl;
	}
	else if (average >= 64)
	{
		cout << "Letter grade: D" << endl;
	}
	else if (average >= 60)
	{
		cout << "Letter grade: D-" << endl;
	}
	else
	{
		cout << "Letter grade: F" << endl;
	}
} // end getLetterGrade
