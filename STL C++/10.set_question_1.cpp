#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	int n =5;
	int arr[] = {3,2,5,4,1};
	set <int> s;
	
	for(int i=0; i<n ; i++)
	{
		s.insert(arr[i]);
		
		if(s.upper_bound(arr[i]) == s.end())
		{
			cout<<"-1"<<" ";
		}
		else
		{
			cout<<*s.upper_bound(arr[i])<<" ";
		}
	}
	
	return 0;
}
