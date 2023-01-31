#include<iostream>
#include<algorithm>
#include<string>
#include<tuple>
#include<array>
using namespace std;

int main()
{
	pair <int, string> p1;
	p1 = make_pair(21 , "yash pandey");
	cout<<p1.first<<" "<<p1.second;
	
	tuple <int,int,string> t1;
	t1 = make_tuple(1,21,"yash");
	cout<<"\n"<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);
	
	return 0;
}
