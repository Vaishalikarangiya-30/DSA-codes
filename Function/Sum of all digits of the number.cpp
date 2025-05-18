
#include <iostream>

using namespace std;

/* Given an integer, write a function that returns a sum of all digits of the numbers*/

int sumofdigit(int number)
{
	int sum = 0;
	
	while(number!=0)
	{
		int digit=number%10;
		sum = sum+digit;
		number=number/10;
	}
	return sum;
}

int main()
{
	int num;
	
	cout<<"Enter the number: "<<num<<endl;
	cin>>num;
	
	int result = sumofdigit(num);
	
	cout<<"sum of all the digits of the number: "<<result<<endl;
	
	return 0;
}
	
   
