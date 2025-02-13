#include <algorithm>
#include <iostream>
#include <vector>

/*Given two matrices , the task is to add them but matrices can eaither be square or rectangular but both are of same size.*/


using namespace std;

int main() 
{
	int a[4][2]={{2,3},{4,5},{6,10},{7,8}};
	int b[4][2]={{5,6},{2,7},{9,3},{12,7}};
	int sum[4][2];
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			
	    }
		
	}	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
