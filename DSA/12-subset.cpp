#include<iostream>
using namespace std;

void set(string &s, string curr,int i)
{
	if(i==s.length())
	{
		cout<<curr<<" ";
		return ;
	}
	set(s,curr,i+1);
	set(s,curr+s[i],i+1);
}

int main()
{
	string s="ABC";
	int i=0;
	string curr=" ";
	set(s,curr,i);
	
	return 0;
}
