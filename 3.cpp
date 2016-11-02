#include<iostream>
using namespace std;

template<class T>
T minValue(T a, T b)
{
	if(a < b)
	{
		return a;
	}
	else
	return b;
}

template<class T>
T maxValue(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	return b;
}

int main()
{
	int num1 = 5;
	int num2 = 10;
	double val1 = 4.5;
	double val2 = 2.2;
	char let1 = 'a';
	char let2 = 'b';
	
	cout << "Smaller integer number is " << minValue(num1, num2) << " and the bigger one is "<< maxValue(num1,num2) << endl;
	cout<< "Smaller double number is "<< minValue(val1,val2) << " and the bigger one is "<<maxValue (val1,val2) << endl;
	cout<< "Smaller letter is "<< minValue(let1, let2)<<" and the bigger one is "<< maxValue (let1, let2)<<endl;
	
	return 0;
}
