//Sinclair Community College
//Loops 
//Kevin Gowsell
//March 17th, 2019

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	string month;
	float east = 0.0, mid = 0.0, west = 0.0; //accumulators
	float sales, expenses;
	char again;
	float totalEast = 0.0, totalMid = 0.0, totalWest = 0.0; //store monthly totals for averages
	int counter = 0;
	float averageEast, averageMid, averageWest;
	float highest;
	string highestName;

	// Program Title 
	cout << "Sales Report Calculator" << endl;
	do
	{ 
		float east = 0.0, mid = 0.0, west = 0.0; //accumulators
		counter++; 

		//Have user enter month name, then process each division 
		cout << "Please enter the month you are processing: ";
		cin >> month;
	
		//East Coast Sales & Expenses 
		cout << "Please enter the sales amount for the East Coast Division: ";
		cin >> sales;
		cout << "Please enter the expense amount for the East Coast Division: "; 
		cin >> expenses;
		east += (sales - expenses);
		totalEast += east;

		//Mid West Sales & Expenses
		cout << "Please enter the sales amount for the Mid West Division: ";
		cin >> sales;
		cout << "Please enter the expense amount for the Mid West Division: ";
		cin >> expenses;
		mid += (sales - expenses);
		totalMid += mid;

		//West Coast Sales & Expenses 
		cout << "Please enter the sales amount for the West Coast Division: ";
		cin >> sales;
		cout << "Please enter the expense amount for the West Coast Division: ";
		cin >> expenses;
		west += (sales - expenses);
		totalWest += west;
	
		//Net Sales Report
		cout << endl; 
		cout << month << " Net Sales Report" << endl;
		cout << "each * represents $1000)" << endl;
		cout << "East Coast: $" << east << "";
		for (int i = 999; east > i; i += 1000)
		{
			cout << "*"; 
		}
		cout << endl;
		cout << "Mid West: $" << mid << "";
		for (int i = 999; mid > i; i += 1000)
		{
			cout << "*";
		}
		cout << endl;
		cout << "West Coast: $" << west << "";
		for (int i = 999; west > i; i += 1000)
		{
			cout << "*";
		}
		cout << endl;
		cout << endl; 

		cout << "Enter Next Month? (Y/N)";
		cin >> again;
	} while (again == 'Y' || again == 'y');

	//after all months are processed, display average sales for a month
		//and the name of the month
		//and its net sales amount for the month with the highest net sales. 

	cout << endl;
	cout << "Average Sales for a Month " << endl;
	cout << endl; 
	averageEast = totalEast / counter;
	averageMid = totalMid / counter;
	averageWest = totalWest / counter;
	cout << "Average Sales for the East Coast Division: " << averageEast << endl;
	cout << "Average Sales for the Mid West Division: " << averageMid << endl;
	cout << "Average Sales for the West Coast Division: " << averageWest << endl;

	if (averageEast > averageMid && averageEast > averageWest)
	{
		highest = averageEast;
		highestName = "East Coast";
	}
	else if (averageMid > averageEast && averageMid > averageWest)
	{
		highest = averageMid;
		highestName = "Mid West ";
	}
	else
	{
		highest = averageWest;
		highestName = "West Coast ";
	}
	cout << "The Division with the highest average sales is the " << highestName << "Division with " << highest << " Average sales a month" << endl; 

	//system exit
	system("pause");
	return 0;
}

