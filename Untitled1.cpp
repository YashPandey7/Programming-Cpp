#include<iostream>
#include<vector>
using namespace std;

int fun(vector <int>& digits)
{
	
		int idx=digits.size()-1;
        while(idx>=0)
        {
            if(digits[idx]==9)
            {
                digits[idx]=0;
            }
            else
            {
                digits[idx]+=1;
            }
            idx--;
        }
        digits.insert(digits.begin(),1);
	
	for(auto x:digits)
	{
		cout<<x<<" ";
	}
	
	return 0;
}

int main()
{
	vector <int> v = {0,9,9,9,9};
	fun(v);
	
	return 0;
}
