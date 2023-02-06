#include<iostream>
#include<list>
using namespace std;

void print(list <int> l)
{
	for(auto x:l)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

int main()
{
	list <int> l={1,2,3,4};
	print(l);
	l.insert(l.begin(),3);
	print(l);
	auto it = l.begin();
	advance(it,3);
//	l.erase(it, l.end());
	l.erase(it);
	print(l);
	
	l.insert(l.end(),3,5);
	print(l);
	
	l.unique();
	print(l);
	
	l.sort();
	print(l);
	
	l.reverse();
	print(l);
	
	return 0;
}
