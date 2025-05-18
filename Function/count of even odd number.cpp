
#include <iostream>

using namespace std;

/* Given an integer array, write a function that returns the count of even and odd numbers in it. 
 */
 
void count_even_odd(int a[],int n)
{
	int count_even=0;
	int count_odd=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count_even+=1;
		}
		else
		{
			count_odd+=1;
		}
	}
	cout<<"The count of even elements:"<<count_even<<endl;
	cout<<"The count of odd elements:"<<count_odd<<endl;
}
 
int main()
{
	int a[]={2,3,6,7,9,5};
	
	int n =sizeof(a)/sizeof(a[0]);
	
	count_even_odd(a,n);
} 

