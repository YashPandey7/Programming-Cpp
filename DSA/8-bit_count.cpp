#include<iostream>
using namespace std;

//int count(int n)
//{
//	int res=0;
//	for(int i=1;i<=n;i++)
//	{
//		int x=i;
//		while(x>0)
//		{
//			x=x&(x-1);
//			res++;
//		}
//	}
//	return res;
//}
int tbl[256];
void init()
{
	tbl[0]=0;
	for(int i=1; i<=255; i++)
		tbl[i] = tbl[i&(i-1)] + 1;
}
int count(int n)
{
	return tbl[n&255] + tbl[(n>>8)&255] + tbl[(n>>16)&255] + tbl[(n>>24)];
}


int main()
{
//	cout<<count(4);
	init();
	int n=9;
	cout<<count(n)<<endl;
	cout<<count(7);
	
	return 0;
}
