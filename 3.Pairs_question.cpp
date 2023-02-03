#include<iostream>
#include<utility>
#include<cmath>
using namespace std;

int main()
{
	int n=4;
	int arr[]={4,2,1,3};
	char b[]={'A','Z','X','B'};
	
	pair <int, char> p[n];
	for(int i=0;i<n ;i++ )
	{
		p[i] = {arr[i],b[i]};
	}
	
	for(int i=0; i<n ; i++)
	{
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	
//	if(n%2==0)
//	{
//		for(int i=0;i<a ; i++)
//		{
//			p=make_pair(arr[i],arr[n-i-1]);
//			cout<<p.first<<" "<<p.second<<endl;
//		}
//	}
//	else {
//		for(int i=0;i<=a ; i++)
//		{
//			p=make_pair(arr[i],arr[n-i-1]);
//			cout<<p.first<<" "<<p.second<<endl;
//		}
//	}

	return 0;
}
