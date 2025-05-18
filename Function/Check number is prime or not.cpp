
#include <iostream>

using namespace std;

/* Given an integer, write a function that checks if it is a prime number or not.Return 
1 if prime or 0 if not.*/

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

int main()
{
	int n=7;
	
	int flag=checkprime(n);
	
	if(flag==1)
	{
		cout<<n<<" is a prime number.";
	}
	else
	{
		cout<<n<<" is not a prime number.";
	}
}
   
