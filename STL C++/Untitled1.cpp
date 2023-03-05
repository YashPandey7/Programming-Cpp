#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector <int> v;
	v.insert(v.begin(),{1,3,2,6,5,4});
	sort(v.begin(),v.end());
	
	auto it = find(v.begin(),v.end(), 5);
	if(it==v.end())
		cout<<"not found";
	else
		cout<<"Found at index = "<<(it-v.begin());
	
	cout<<endl;
	it= lower_bound(v.begin(),v.end(), 2.5);
	cout<<*it;
	
	cout<<endl;
	for(auto x:v)
		cout<<x<<" ";
	return 0;
}
