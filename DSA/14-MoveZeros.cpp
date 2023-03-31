#include<iostream>
using namespace std;

void movezeros(int arr[],int n)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]==0)
		{
			for(int j=i+1; j<n; j++)
			{
				if(arr[j]!=0)
				{
					int temp=arr[j];
					arr[j]=arr[i];
					arr[i] = temp;
					i++;
				}
			}
		}
	}
}

int main()
{
	int arr[] = {8,5,0,10,0,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	movezeros(arr,n);
	for(int i=0;i<n ;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
