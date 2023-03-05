#include<iostream>
#include<vector>
#include<tuple>
#include <algorithm>
#include<utility>
using namespace std;

int main()
{
	int n=4;
	int a[] = {1,2,1,2};
	int b[] = {3,4,4,4};
	int c[] = {1,3,2,4};
	
	vector <tuple <int,int,int>> t[n];
	for(int i=0; i<n; i++)
	{
		t[i].push_back(make_tuple(a[i], b[i], c[i]));
	}
	
	sort(t.begin(), t.end());
	
	for(int i=0; i<4 ; i++)
	{
		cout<< get<0>(t[i])<<" ";
	}cout<<endl;
	
	for(int i=0; i<4 ; i++)
	{
		cout<< get<1>(t[i])<<" ";
	}cout<<endl;
	
	for(int i=0; i<4 ; i++)
	{
		cout<< get<2>(t[i])<<" ";
	}
	
//	int x=1,c=0;
//	vector <int> v (arr,arr+5);
//	sort(v.begin(),v.end());
//	
//	for(int i=0; i<v.size(); i++)
//	{
//		if(v[i] == 1)
//		{
//			c++;
//		}
//	}
//	cout<<c;
	
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
