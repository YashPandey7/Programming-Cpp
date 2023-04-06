#include<iostream>
using namespace std;

int count(int arr[],int n)
{
	int res=0, count=1;
	for(int i=1; i<n; i++)
	{
		if((arr[i]+arr[i-1])%2 !=0 )
		{
			count++;
			if(res<count)
				res=count;
		}
		else
		{
			count=1;
		}
	}
	return res;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 9};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<count(arr,n);
	
	return 0;
}
