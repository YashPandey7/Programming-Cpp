#include<iostream>
using namespace std;

int leftRotate(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		arr[i]=arr[i+2];
		arr[i+2]=temp;
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5};
	leftRotate(arr,5);
	
	return 0;
}
