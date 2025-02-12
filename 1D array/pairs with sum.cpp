#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int a[5]={1,5,2,4,0};
	int i,j;
	int value=6;
	int count=0;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]+a[j]==value)
			{
				count=count+1;
			}
		}
	}
	cout<<"the total no which sum are equal to value="<<count<<endl;
	
}
