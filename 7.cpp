#include <iostream>
using namespace std;

class TestScores
{
	double avgTestScores;
	double testScores[];
	int numStudents;
		
	public:		
		TestScores(double *scoresPtr, int size)
		{	
			this -> numStudents = size;
			
			for(int i = 0; i < size; i++)
			{
				this -> testScores[i] = scoresPtr[i];
			}
		}
		
		double getAvgScores()
		{	
			return avgTestScores;
		}
		
		void setAvgScores()
		{	
			double total;
			
			for(int i = 0; i < 3; i++)
			{
				total = total + testScores[i];
			}
			avgTestScores = total/3;
		}
};

void getNumberOfStudents(int &);

double getScores()
{
	double score = 0;
	
	cout << "Enter Students' Test Score: ";
	cin >> score;
	
	if(score < 0 || score > 100)
	{	
		string e = "ERROR, Invalid Input";
		throw e;
		
	} 
	else 
	return score;
}

int main()
{	
	double *scores = new double [3];
	
	for(int i = 0;i < 3;i++)
	{		
		double score = 0;
		
		try
		{	
			score = getScores();	
			scores[i] = score;
				
		} 
		catch(string exceptionString)
		{
			cout << exceptionString <<endl;
			exit(0);
		}
	}
	
	TestScores set1 = TestScores(scores, 3);

	set1.setAvgScores();
		
	cout << endl << "The average score of 3 students is " << set1.getAvgScores();
	
	return 0;
}
