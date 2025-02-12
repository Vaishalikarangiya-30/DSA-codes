#include <algorithm>
#include <iostream>
#include <vector>

/*Given an array of N integers, reverse it.
Note:Do this without using extra space.
Todo:Try it reversing it just for a given range[start,end]*/


using namespace std;

int main() 
{
	int a[5]={4,2,3,1,5};
	int i;
	int r=4 ,l=0;
	
	while(l<r)
	{
		int temp = a[r];
		a[r]=a[l];
		a[l]=temp;
		
		l++;
		r--;
		
	}
	
	for(i=0;i<5;i++)
	{ 
		cout<<a[i]<<" ";
	}
	
}
