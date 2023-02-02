#include<iostream>
#include<set>
using namespace std;

int fun1(int arr[],int n, int x)
{	
	set <int> s (arr,arr+n);
	for(auto x1:s)
	{
		cout<<x1<<" ";
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
		cout<<x1<<" ";
	}
	
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
