#include <iostream>
#include <map>
using namespace std;

int main()
{
	map <int,int> m;
	m.insert({10,200});
	m[5] = 400;
	m.insert({3,500});
	m[3] = 600;
	
	for(auto &x:m)
	{
		cout<<x.first<<" "<<x.second<<" ";
	}
	
	return 0;
}
