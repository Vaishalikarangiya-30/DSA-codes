
#include <iostream>

using namespace std;

/* Given an integer array, write a function that prints all the elements present in the array 
seperated by a space. */

void printarray(int a[],int n) 
{
	cout<<"The elements of the array are:";
     for(int i=0;i<n;i++)
	 {
		 cout<<a[i]<<" ";
	 }
	
} 
int main()
{
	int a[]={1,5,7,9,4,3,7};
	
      int n= sizeof(a)/sizeof(a[0]);
	
	cout<<"The number of elements in array are:"<<n<<endl;
	
	printarray(a,n);
}