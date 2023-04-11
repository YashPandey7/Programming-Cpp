#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v {10,20,30,40,50};
	vector<int>::iterator upper1,upper2;
	upper1 = upper_bound(v.begin(),v.end(),50);
	cout<<(upper1 - v.begin());
	
	return 0;
}
