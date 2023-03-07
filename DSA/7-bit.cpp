#include<iostream>
using namespace std;

void isSet(int n, int k)
{
	int x = n>>(k-1);
	if((x&1)!=0)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
}

int main()
{
	isSet(5,1);
	isSet(5,2);
	isSet(5,3);
	isSet(5,4);
	
	return 0;
}
