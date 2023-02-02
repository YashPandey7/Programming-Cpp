#include<iostream>
#include<map>
using namespace std;

int fun1(int arr[],int n, int x)
{	
	map <int,int> s;
	for(int i=0; i<n ; i++)
	{
		s.insert({arr[i],arr[i]});
	}
	
	for(auto x1:s)
	{
		cout<<x1.first<<" "<<x1.second<<endl;
	}
	
	if(s.find(1) != s.end())
	{
		cout<<"\nErased "<<x<<endl;
		s.erase(1);
	}
	else
	{
		cout<<"\nNot Found\n";	
	}
	
	for(auto x1:s)
	{
		cout<<x1.first<<" "<<x1.second<<endl;
	}

	
//	cout<<endl;
//	int a=INT_MIN;
//	for(auto x1:s)
//	{
//		if(x1.second>a)
//		{
//			a=x1.second;
//		}
//	}
//	cout<<a;
	
	
	return 0;
}

int main()
{
	int arr[] = {9,8,7,4,4,2,1,1,9,8};
	int x= 1;
	int n= sizeof(arr)/sizeof(arr[0]);
	fun1(arr,n,x);
	
	return 0;
}
