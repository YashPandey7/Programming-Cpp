#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

int main()
{
//	Vector
	vector <int> v1 = {1,3,2,9,5};
	vector <int>::iterator it = v1.begin();
	
	for(it = v1.begin(); it<v1.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	sort(it, v1.end());
	cout<<"\nAfter Sorting Vector -- ";
	for(int x:v1)
	{
		cout<<x<<" ";
	}
	
//  List
	cout<<"\n\nList -- ";
	list <int> l1 = {1,3,2,6,5,4};
	l1.sort();
	
	for(auto it=l1.begin(); it!=l1.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	l1.push_back(8);
	l1.push_front(9);
	cout<<"\nNew List is -- ";
	for(int x:l1)
	{
		cout<<x<<" ";
	}

	
	return 0;
}
