
#include <iostream>

using namespace std;

/* given two numbers, start and end, write a function  that prints all the numbers from start to end */
  
void printrange(int start,int end)
{
	while(start<=end)
	{
		cout<< start <<" ";
		start = start+1;
	}
}

int main()
{
	int start=5;
	int end=10;
	
	printrange(start, end);
}

	  
