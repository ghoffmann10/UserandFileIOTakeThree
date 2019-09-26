/*
Grace Hoffmann
C++ Fall 2019
Due: September 26, 2019
Lab: 3 User and File I/O
Finding the mean and standard deviation of four integers inputted by the user
and finding the same for a text file. Outputting the results to a different file.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	//Declaring Variables
	int a;
	int b;
	int c;
	int d;
	int v;
	float result;

	cout << "Welcome! This is a program that is designed to find the mean and" 
		<< "standard deviation of a set of four integers.\nPlease enter all four " 
		<< "integers with a space in between each one. Then press enter. \n" << endl;
	cin >> a >> b >> c >> d;	//Storing variables
	int sum = a + b + c + d;	//Adding variables
	float average = sum / 4.0;	//Finding the average
	cout << "The mean is " << average << "\n" << endl;	//Outputting variables

	float i = (pow((a - average), 2) + pow((b - average), 2) + pow((c - average), 2)
		+ pow((d - average), 2)) / 4;	//Subtracting the average from the integer, square rooting the result, and finding the sum
	result = sqrt(i);	//Finding the square root of the previous sum
	cout << "The standard deviation is: " << result << "\n" << endl; //Outputting the standard deviation

	//Declaring variables 
	int e, f, g, h;	
	float res;
	string x = "The mean of the input file is: ";
	string y = "The standard deviation of the input file is: ";
	string inputFileName = "C:/Users//HOFFMANN10/Documents/C++/Projects/inMeanStd.dat/inMeanStd.dat";
	string outputFileName = "outMeanStd.dat";
	ifstream inFile;	//Reading input from the file
	ofstream outFile;	//Creating an output file and writing the information there

	inFile.open(inputFileName);		//Opening the input file
	outFile.open(outputFileName);	//Opening the output file

	inFile >> e >> f >> g >> h;		//Using getline to store the information from the input file
	outFile << "The mean of the user inputted integers was: " << average << "\n" << endl; //Outputting the mean results to the outfile
	outFile << "The standard deviation of the user inputted integers was: " << result
		<< "\n" << endl;	 // Outputting the standard deviation results to the outfile
	outFile << x << average << "\n" << endl;	 //Outputting the average result of the integers of the inputted file to the outfile
	

	int suma = e + f + g + h;	//Finding the sum of the integers from the inputted file
	float ave = suma / 4.0;		//Finding the average of the integers from the inputted file
	cout << x << ave << "\n" << endl;	//Outputting the average
	float j = (pow((e - ave), 2) + pow((f - ave), 2) + pow((g - ave), 2)
		+ pow((h - ave), 2)) / 4;	////Subtracting the average from the integer, square rooting the result, and finding the sum
	res = sqrt(j);	////Finding the square root of the previous sum
	cout << y << res << "n" << endl;	//Outputting the standard deviation 
	outFile << y << res;	//Outputting the standard deviation of the integers of the inputted file to the outfile
	
	inFile.close();		//Closing the input file
	outFile.close();	//Closing the output file

	return 0;
}
