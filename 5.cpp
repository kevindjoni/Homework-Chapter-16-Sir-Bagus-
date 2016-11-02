#include <iostream>
using namespace std;

double accTotal;
template <class T>
T total(T val)
{
	accTotal += val;
	return accTotal;
}

int main()
{
	int option;
	double acc;
	int integer;
	double inDouble;
	
	do
	{
		cout << "Choices" << endl
			 << "-------" << endl
			 << "1. Integer" << endl
			 << "2. Double" << endl
			 << "3. Terminate" << endl 
			 << "Input: ";
		cin >> option;	 
			 
		switch(option)
		{
			case 1:
				cout << endl << "Enter integer: ";
				cin >> integer;
				acc = total(integer);
			break;
			
			case 2:
				cout << endl << "Enter double: ";
				cin >> inDouble;
				acc = total(inDouble);
			break;
			
			case 3:
				exit(0);
				
			default:
				cout << "Invalid Input";
				exit(0);
		}
		cout << "Total amount: " << acc	<< endl << endl; 
	}
	while(option > 0 && option < 4);
	
	return 0;
}
