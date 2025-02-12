#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int a[5]={2,4,56,7,3};
	int count=0,i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}
	}
	cout<<"The total even no in array are:"<<count<<endl;
}
