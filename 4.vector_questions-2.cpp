#include<iostream>
#include<vector>
using namespace std;

int prime(int x)
{
	int flag=0;
	
	if(x>3)
	{
		for(int i=2; i<=(x/2) ; i++)
		{
			if(x%i==0)
			{
				flag=1;
			}
		}
	}
	else if(x==1)
	{
		flag=1;
	}
	return flag;
}

int main()
{
	vector <int> v = {3,5,2,4,8};
	for(int i=0 ; i<v.size()-1 ; i++)
	{
		if(prime(i+1)==0)
		{
			if(prime(v[i])==0)
			{
				cout<<v[i]<<" ";
			}
		}
	}
	
//	cout<<prime(1);

	
	
	return 0;
}
