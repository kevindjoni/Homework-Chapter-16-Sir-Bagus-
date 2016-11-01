#include <iostream>
#include <string>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
	
	const string monthN[12] = {"January", "February", "March", "April",
							  "May", "June", "July", "August", "September",
							  "October", "November", "December"};
	
	public:
		Date(int day, int month, int year)
		{
			this -> day = day;
			this -> month = month;
			this -> year = year;
		}
		
		int getDay()
		{
			return day;
		}
		
		int InvalidDay(int day)
		{
			if(day < 1 || day > 31)
			{
				string exceptionString = "ERROR, Day must not be less than 1 or more than 31";
				throw exceptionString;
			}
			return day;
		}
		
		int getMonth()
		{
			return month;
		}
		
		int InvalidMonth(int month)
		{
			if(month < 1 || month > 12)
			{
				string exceptionString = "ERROR, Month must not be less than 1 or more than 12";
				throw exceptionString;
			}
			return month;
		}
		
		int getYear()
		{
			return year;
		}
		
		void print1()
		{
			cout << month << " / " << day << " / " << year << endl;
		}	
		
		void print2()
		{
			cout << monthN[month - 1] << " " << day << ", " << year << endl;
		}
		
		void print3()
		{
			cout << day << " " << monthN[month - 1] << " " << year;
		}
};

int main()
{
	int day1;
	int month1;
	int year1;
	
	cout << "Enter Day: ";
	cin >> day1;
	cout << "Enter Month: ";
	cin >> month1;
	cout << "Enter Year: ";
	cin >> year1;
	
	Date d(day1, month1, year1);
	
	try
	{
		cout << endl << "DISPLAY" << endl;
		cout << "-------" << endl;
		d.InvalidDay(day1);
		d.InvalidMonth(month1);
		cout << "First Format" << "\t: ";
		d.print1();
		cout << "Second Format" << "\t: ";
		d.print2();
		cout << "Third Format" << "\t: ";
		d.print3();
	}
	
	catch(string exceptionString)
	{
		cout << endl << exceptionString;
	}
	
	return 0;
}
