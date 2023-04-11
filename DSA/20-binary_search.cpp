#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v {10,20,30,40,50};
	vector<int>::iterator upper1,lower1;
	upper1 = upper_bound(v.begin(),v.end(),41);
	cout<<(upper1 - v.begin());
	
	lower1 = lower_bound(v.begin(), v.end(), 41);
	cout<<endl<<(lower1 - v.begin());
	
	return 0;
}
