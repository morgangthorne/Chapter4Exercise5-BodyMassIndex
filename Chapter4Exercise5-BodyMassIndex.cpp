/*
File Name: Chapter4Exercise5-BodyMassIndex.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write a prorgram that calculates and displays a person's
body mass index (BMI). The program should display a message
indicating whether the person has optimal weight, underweight
or overweight.
*/

//BMI = Weight * 703/height squared

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int feet;
	int inches;
	double Weight;

	cout << "Body Mass Index Calculator" << endl;
	cout << "What is your weight in lbs: ";
	cin >> Weight;
	cout << "Please enter your height in feet first: ";
	cin >> feet;
	cout << "Please enter the remaining inches: ";
	cin >> inches;
	
	//If user enters too many inches script ends.
	{
		if (inches <= 11)
		{
			cout << "Thank you!" << endl;
			return 1;
		}
		else
		{
			if (inches > 11)
				cout << "Enter height in correct format, try again.";
			return 0;
		}
	}
	
	
	//Function to allow user to enter their height in feet and inches for ease of user
	int Height = inches + (feet * 12);

	//Variables for the Function to calculate BMI
	int fractionNumerator = 703;
	double fractionDenominator = pow(Height, 2);
	double BMICalculation = Weight * (fractionNumerator / fractionDenominator);

	//Output showing users height, weight, and BMI
	cout << "Height: " << feet << "ft" << inches << "in" << endl;
	cout << "Weight: " << Weight << "lbs" << endl;
	cout << "You have a BMI of: " << fixed << setprecision(1) << BMICalculation << endl;

	//Code to show whether BMI is optimal, over, or under
	if (BMICalculation > 25)
		cout << "Your BMI indicates that you are overweight.";
	else
		if (BMICalculation <= 25 || BMICalculation >= 18.5)
			cout << "Your BMI indicates that you are optimal weight.";
		else
			if (BMICalculation < 18.5)
				cout << "Your BMI indicates you are underweight.";
	




}


