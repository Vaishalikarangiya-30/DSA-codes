#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int a[5]={4,3,6,8,12};
	int sum=0,i;
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	cout<<"The sum of the array elements are:"<<sum<<endl;

	return 0;
}