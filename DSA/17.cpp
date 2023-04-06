#include<iostream>
using namespace std;

int count(bool arr[],int n)
{
	int x=0 ,y=0 ;
	for(int i=0; i<n; i++)
	{
		if(arr[i] == 1)
			x++;
			if(y<x)
				y=x;
			
		else 
			x=0;
	}
	return y;
}

int main()
{
	bool arr[] = {0,1,1,1,0,0,1,1,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<count(arr,n);
	
	return 0;
}
