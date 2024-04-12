#include<iostream>
using namespace std;

int main()
{
	int size=5;
	int arr[size]={1,2,3,4,5};
	
	int i;
	cout<<"array = ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//addition will be
	
	cout<<"addition = ";
	int add=0;
	for(i=0;i<size;i++)
	{
		add=add+arr[i];
	}
	cout<<add;
	
	return 0;
}
