#include<iostream>
using namespace std;

int sec(int arr[], int n)
{
	int gr=arr[0];
	for(int i=1; i<n; i++)
	{
		if(gr<arr[i])
		{
			gr=arr[i];
		}
	}
//	return gr;
	int sg=arr[0];
	for(int i=0; i<n; i++)
	{
		if(arr[i]<gr && sg<arr[i])
		{
			sg=arr[i];
		}
	}
	return sg;
}

int main()
{
	int arr[]={5,7,3,4,11,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<sec(arr,n);
	
	return 0;
}
