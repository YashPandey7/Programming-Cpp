#include<iostream>
#include<stack>
using namespace std;

void printSpan(int arr[], int n)
{
	stack<int> s;
	s.push(0);
	cout<<1<<" ";
	int span;
	for(int i=1; i<n; i++)
	{
		while(s.empty() == false && arr[s.top()]<= arr[i])
		{
			s.pop();
		}
		
		if(s.empty() == true)
		{
			span = i+1;
		}
		else
		{
			span = i - s.top();
		}
		cout<<span<<" ";
		s.push(i);
	}
}

int main()
{
	int arr[] = {60,10,20,40,35,38,50,70,65};
	int n = sizeof(arr)/sizeof(arr[0]);
//	cout<<n;

	printSpan(arr, n);
	
	return 0;
}
