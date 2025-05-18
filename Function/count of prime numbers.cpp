
#include <iostream>

using namespace std;

/* Given an array of integers, write a function that returns the count of prime numbers in it.*/

int checkprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

void countprime(int a[],int n)
{
	int prime_count=0;
	for(int i=0;i<n;i++)
	{
		int flag=checkprime(a[i]);
		
		prime_count += flag;
	}
	cout<<"The total count of prime elements: "<<prime_count;
}

int main()
{
	int a[]={2,3,10,5,8,9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	countprime(a,n);
}
 
   
