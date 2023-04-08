#include<iostream>
using namespace std;

bool count(int arr[],int sum,int n)
{
	int curr = 0, e=0;
	for(int i=0; i<n; i++)
	{
		curr += arr[i];
		while(curr>sum)
		{
			curr = curr - arr[e];
			e++;
		}
		if(sum==curr)
			return true;
	}
	return false;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 10};
	int sum = 12;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<count(arr,sum,n);
	
	return 0;
}
