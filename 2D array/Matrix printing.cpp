#include <algorithm>
#include <iostream>
#include <vector>

/*Given a matrix , the task is to print it*/


using namespace std;

int main() 
{
	int a[3][4]={{1,2,3,8},{4,5,6,9},{7,8,9,5}};
	
	/* for row */
	for(int i=0;i<3;i++)
	 {
		 /*for column*/
		 for(int j=0;j<4;j++)
		 {
			cout<<a[i][j]<<" "; 
		 }
		 cout<<endl;
	 }
	
	
}
