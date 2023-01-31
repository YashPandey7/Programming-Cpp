#include<iostream>
#include<set>
using namespace std;

struct Test{
	int x;
	void set(int a)
	{
		x=a;
	}
};

int main()
{
	set <int> s;
	s.insert(10);
	s.insert(5);
	s.insert(15);
	s.insert(20);
	
	for(int t:s)
	{
		cout<<t<<" ";
	}
	
	return 0;
}
