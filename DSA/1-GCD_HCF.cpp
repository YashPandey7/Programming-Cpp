#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;
	
	else
		return gcd(b,a%b);
}

int main()
{
	cout<<"GCD of 12 & 15 is : "<<gcd(12,15);
	
	return 0;
}
