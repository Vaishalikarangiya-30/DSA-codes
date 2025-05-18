
#include <iostream>

using namespace std;

/* Given an integer n, write a function that returns the sum of all the natural numbers from 1 to 
n (both included).*/
 
   int printSum(int n)
	{
		int i,sum=0;
		
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		return sum;
	}
// sum of all the natural numbers from 1 to n => n*(n+1)/2
	int main()
	{
		int n=10;
		cout<<"The sum is: "<<printSum(n);
	}
