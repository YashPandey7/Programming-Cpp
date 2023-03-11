#include<iostream>
using namespace std;

int fun(int n)
{
	if(n==0)
		return 0;
		
	fun(n/2);
	cout<<(n%2);
}

int main()
{
	cout<<"Binary conversion of 13 -- ";
	fun(13);
	
	cout<<"\nBinary conversion of 17 -- ";
	fun(17);
	
	cout<<"\nBinary conversion of 19 -- ";
	fun(19);
	
	cout<<"\nBinary conversion of 1231 -- ";
	fun(1231);
	
	return 0;
}
