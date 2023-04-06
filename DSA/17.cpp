#include<iostream>
using namespace std;

int count(bool arr[],int n)
{
	int freq=1, x=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==1 && arr[i+1]==1)
		{
			freq++;
			if(x<freq)
			{
				x=freq;
			}
		}
		else
		{
			freq=1;
		}
	}
	return x;
}

int main()
{
	bool arr[] = {0,1,1,1,0,0,1,1,1,1,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<count(arr,n);
	
	return 0;
}
