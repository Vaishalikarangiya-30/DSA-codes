#include <algorithm>
#include <iostream>
#include <vector>

//Given an array of N integers, reverse it.Can use extra space if required.

using namespace std;

int main() 
{
	int a[5]={4,2,3,1,5};
	int i,j=0,b[5];
	
	for(i=4;i>=0;i--)
	{
		b[j]=a[i];
		j=j+1;
	}
	
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	
}
