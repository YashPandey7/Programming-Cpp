#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] ={1,2,2,1,1};
	int x=1,c=0;
	vector <int> v (arr,arr+5);
	sort(v.begin(),v.end());
	
	for(int i=0; i<v.size(); i++)
	{
		if(v[i] == 1)
		{
			c++;
		}
	}
	cout<<c;
	
//	for(auto x:v)
//	{
//		cout<<x<<" ";
//	}
	
//	cout<<endl;
//	sort (v.begin(),v.end(),greater<int>());
//	for(auto x:v)
//	{
//		cout<<x<<" ";
//	}
	
	return 0;
}
