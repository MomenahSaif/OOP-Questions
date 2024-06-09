#include<iostream>
#include"(Q6)Header.h"
using namespace std;
int main()
{
	Calendar obj;
	int choice;
	cout << "MENU:";
	cout << "\t1.To display the calendar of the given month " << endl;
	cout << "\t2.Calculate difference between two dates " << endl;
	cout << "\t3.To calulate the future date " << endl;
	cout << "\t4.To calulate the past date " << endl;

	cout << "From the above menu select an option by typing its number:\t";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:  obj.displayCalendar();
		break;
	case 2:  obj.Difference();
		break;
	case 3:  obj.Future_date();
		break;
	case 4:  obj.Past_date();
		break;
	default:cout << "Invalid input" << endl;
	}


}