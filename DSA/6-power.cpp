#include<iostream>
using namespace std;

int power(int x, int n)
{
	int res=1;
	while(n>0)
	{
		if(n%2!=0)
			res=res*x;
		x=x*x;
		n=n/2;
	}
	return res;
}

int main()
{
	cout<<power(5,8);
	
	return 0;
}
