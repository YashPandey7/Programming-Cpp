#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v1 = {1,3,5,6};
	
	vector <int>::iterator it;
	v1.insert(v1.begin(),100);
	v1.insert(v1.end(),10);
	v1.insert(v1.end(), 2,8);
	for(it=v1.begin() ; it < v1.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	
	return 0;
}
