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
		class wrongDay
		{
		};
		class wrongMonth
		{
		};
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
		
		void InvalidDay()
		{
			if(day < 1 || day > 31)
			{
				throw wrongDay();
			}
		}
		
		int getMonth()
		{
			return month;
		}
		
		void InvalidMonth()
		{
			if(month < 1 || month > 12)
			{	
				month = 1;
				throw wrongMonth();
			}
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
	
	cout << endl << "DISPLAY" << endl;
	cout << "-------" << endl;
	
	try
	{	
		d.InvalidDay();	
	}
	catch(Date::wrongDay)
	{
		cout << "Invalid Day" << endl;	
	}
	
	try
	{
		d.InvalidMonth();
	}
	catch(Date::wrongMonth)
	{
		cout << "Invalid Month" << endl;
		exit(0);
	}

	cout << "First Format" << "\t: ";
	d.print1();
	cout << "Second Format" << "\t: ";
	d.print2();
	cout << "Third Format" << "\t: ";
	d.print3();
	
	return 0;
}
