#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v1 {1,3,5,2,9};
	for(int i=0; i<v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<"\n"<<v1.capacity();
	v1.push_back(7);
	cout<<"\n"<<v1.capacity();
	
	return 0;
}
