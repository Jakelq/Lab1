// Jacob Leuquire
// Lab 01 - COSC 2030
// Assisted by Matthew Hanley
// Sept 17, 2018
// Objective: Using Standard Input, return the count of the total numbers in the file and the first two and last two numbers from the file

#include<iostream>
#include<fstream>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::string;
using std::getline;
using std::fstream;

int main()
{
	int count = -1;
	double first = 0;
	double second = 0;
	double previous = 0;
	double last = 0;
	double current = 0;
	double hold1 = 0;
	double hold2 = 0;
	string fileName;
	ifstream inputFile;

	cout << "Enter a filename: ";	// request for the file name in path
	cin >> fileName;
	cout << endl;

	inputFile.open(fileName);	// open the file

	while (!inputFile.fail())	// start loop to cycle through file using .fail()
	{
		inputFile >> current;
		if (count == -1)
		{
			first = current;	// if count is -1 (set originally as -1) save current integer as first
		}
		else if (count == 0)
		{
			second = current;	// if count is 0, save current integer as second
		}
		else if (count > 0)
		{
			previous = hold2;	// if count is greater than 0, set previous to placeholder1
			hold2 = hold1;		// set placeholder2 to placeholder1 for second to last variable saving
			hold1 = current;	// set current value to first placeholder
		}
		count++;				// increase count for each iteration
	}
	last = current;				// save the final value of current to last


	inputFile.close();			// close and clear file and log
	inputFile.clear();

	cout << count << endl;		// show values of first, second, previous, last
	cout << first << endl;
	cout << second << endl;
	cout << previous << endl;
	cout << last << endl;
	system("pause");			// system pause for cout to remain visible



}
