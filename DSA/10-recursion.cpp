#include<iostream>
using namespace std;

void fun(int n)
{
	if(n<=0)
		return ;
		
	cout<<n<<" ";
	fun(n-1);
}

int sum(int n)
{
	if(n==0)
		return 0;
		
	else
		return sum(n/10) + n%10;
}

int main()
{
	fun(4);
	cout<<"\nSum of 123 is ";
	cout<<sum(123);
	
	cout<<"\nSum of 1232345 is ";
	cout<<sum(1232345);
	
	return 0;
}
