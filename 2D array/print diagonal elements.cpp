#include <algorithm>
#include <iostream>
#include <vector>

/* print the diagonal element:
     1) principal diagonal elements.
	 2) secondary diagonal elements.*/
  

using namespace std;

int main() 
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"The principal diagonal elements are:";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
			{
				cout<<a[i][j]<<" ";
			}
		}
	}
	
	cout<<"\nThe secondary diagonal element are:";
	
	int k=2;  /*for column*/
	
	for(int i=0;i<3;i++)
	{
		cout<<a[i][k]<<" ";
		k--;
	}
	
}
