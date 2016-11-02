#include <iostream>
using namespace std;

template <class value>
value absoluteVal(value num)
{
	if(num < 0)
	{
		num *= -1;
	}
	else
	{
		num *= 1;
	}
	return num;
}

int main()
{
	int input;
	
	cout << "Enter an integer: " << endl;
	cin >> input;
	cout << "The absolute value of your integer is " << absoluteVal(input);
	
	return 0;
}
