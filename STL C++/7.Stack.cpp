#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0  ; i<n ; i++)
	{
		cin>>arr[i];
	}
//	5,6,7,4,3
	stack <int> s;
	
	for(int i=0; i<n ; i++)
	{
		if(s.empty() == true)
		{
			s.push(arr[i]);	
			cout<<"-1 ";
		}
		
		else if(arr[i]>=s.top())
		{
			s.pop();
			s.push(arr[i]);
			cout<<"-1 ";
		}
		else if(arr[i]<s.top())
		{
			cout<<s.top()<<" ";
			s.push(arr[i]);
		}
		else 
		{
			cout<<s.top()<<" ";
		}
	}
	
	return 0;
}
