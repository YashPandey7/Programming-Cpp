#include<iostream>
using namespace std;

int count(int n)
{
	int res=0;
	for(int i=1;i<=n;i++)
	{
		int x=i;
		while(x>0)
		{
			x=x&(x-1);
			res++;
		}
	}
	return res;
}

int main()
{
	cout<<count(4);
	
	return 0;
}
