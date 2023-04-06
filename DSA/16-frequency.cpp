#include<iostream>
using namespace std;

void freq(int arr[] ,int n)
{
	int x=1;
	for(int i=1; i<n; i++)
	{
		if(arr[i] == arr[i-1])
		{
			x++;
		}
		else
		{
			cout<<arr[i-1]<<" "<<x<<endl;
			x=1;
		}
	}
	cout<<arr[n-1]<<" "<<x<<endl;
}

int main()
{
	int arr[] = {10,10,10,30,40,90,90};
	freq(arr,7);
	return 0;
}
