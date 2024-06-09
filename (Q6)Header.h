#pragma once
#include<iostream>
using namespace std;
class Date {
public:
	int date1;
	int month;
	int year;

};
class Calendar {
public:
	char* day;
	int week;
	Date date;

	Calendar() {}

	void displayCalendar()
	{
		cout << "Enter the year to display its calendar:\t";
		cin >> date.year;
		cout << endl << "Enter the month to display its calendar:\t";
		cin >> date.month;

		int days;
			// Index of the day from 0 to 6 
		int current = (((date.year - 1) * 365) + 4 * ((date.year - 1) / 4) - 4 * ((date.year - 1) / 100) + 4 * ((date.year - 1) / 400) + 1) % 7;
		int leapsum = (!(date.year % 4) && (date.year % 100)) || !(date.year % 400);
		switch (date.month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days = 31;
				break;
			case 2:
				if (leapsum == 0)
				{
					days = 29;
				}
				else
				{
					days = 28;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30;
				break;
			}

		// Print the current month name 

				cout << endl << "  ------------------------ - " << endl;

				//	getMonthName(i).c_str());

				// Print the columns 

				cout<<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat" <<endl;
				// Print appropriate spaces 
				int k;
				for (k = 0; k < current; k++)
					cout<<"     ";

				for (int j = 1; j <= days; j++)
				{
					printf("%5d", j);
					if (++k > 6)
					{
						k = 0;
						printf("\n");
					}
				}
				if (k)
					printf("\n");
				current = k;
			return;

	}
	void Difference()
	{
		Date d1;
		Date d2;
		cout << "Enter first date:" << endl;
		cout << "\tDate:";
		cin >> d1.date1;
		cout << endl << "\tMonth:";
		cin >> d1.month;
		cout << endl << "\tYear:";
		cin >> d1.year;

		cout << "Enter second date:" << endl;
		cout << "\tDate:";
		cin >> d2.date1;
		cout << endl << "\tMonth:";
		cin >> d2.month;
		cout << endl << "\tYear:";
		cin >> d2.year;


		const int monthDays[12] = { 31, 59, 90, 120, 151, 181, 212, 243,273, 304, 334, 365 };


		long int Daycount1 = (d1.month * 365);
		Daycount1 += monthDays[d1.month];
		Daycount1 += d1.date1;
		Daycount1 += LeapYearDays(d1);
		long int Daycount2 = (d2.year * 365);
		Daycount2 += monthDays[d2.month];
		Daycount2 += d2.date1;
		Daycount2 += LeapYearDays(d2);

	
		int totaldays = (abs(Daycount1 - Daycount2));
		int weeks = ((totaldays % 365) % 30) / 7;
		int days = ((totaldays % 365) % 30) % 7;
		cout << "The difference between two dates in is Weeks: " << weeks << " Days: " << days << endl;

	}

	int LeapYearDays(Date d) {
		int years = d.year;
		if (d.month <= 2)
			years--;
		return ((years / 4) - (years / 100) + (years / 400));
	}

	void Future_date()
	{
		Date d1;
		cout << "Enter first date:" << endl;
		cout << "\tDate:";
		cin >> d1.date1;
		cout << endl << "\tMonth:";
		cin >> d1.month;
		cout << endl << "\tYear:";
		cin >> d1.year;

		int  Nextweek, Nextday, Resultdate, Resultyear;
		char* Resultmonth, Nextmonth, Resultday;
		cout << "Enter number of weeks ,months and days to add:" << endl;
		cout << "\tMonth:";
		cin >> Nextmonth;
		cout << endl << "\tWeek:";
		cin >> Nextweek;
		cout << endl << "\tDays:";
		cin >> Nextday;




		//cout << Nextweek << " from the date " << d1.date1 << " " << d1.month << " " << d1.year
			//<< " is " << Resultday << "," << Resultdate << " " << Resultmonth << " " << Resultyear << endl;


	}

	void Past_date()
	{
		Date d1;
		cout << "Enter first date:" << endl;
		cout << "\tDate:";
		cin >> d1.date1;
		cout << endl << "\tMonth:";
		cin >> d1.month;
		cout << endl << "\tYear:";
		cin >> d1.year;

		int  Nextweek, Nextday, Resultdate, Resultyear;
		char* Resultmonth, Nextmonth, Resultday;
		cout << "Enter number of weeks ,months and days to add:" << endl;
		cout << "\tMonth:";
		cin >> Nextmonth;
		cout << endl << "\tWeek:";
		cin >> Nextweek;
		cout << endl << "\tDays:";
		cin >> Nextday;




		//cout << Nextweek << " from the date " << d1.date1 << " " << d1.month << " " << d1.year
			//<< " is " << Resultday << "," << Resultdate << " " << Resultmonth << " " << Resultyear << endl;
	}
};
