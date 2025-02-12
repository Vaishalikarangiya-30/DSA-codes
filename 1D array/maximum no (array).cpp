#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int a[5]={-3,5,67,89,-90};
	int max=a[0],i;
	
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"maximum no in the array is="<<max<<endl;
}
