#include <iostream>
#include<stack>
#include <vector>
using namespace std;

struct Stack{
	vector<int> v;
	
	void push(int x)
	{
		v.push_back(x);
	}
	int pop()
	{
		int x = v.back();
		v.pop_back();
		return x;
	}
	int top()
	{
		return v.back();
	}
	
	bool empty()
	{
		return (v.empty() == true);
	}
	
	int size()
	{
		return v.size();
	}
	
};

int main()
{
	Stack s;
	s.push(5);
	s.push(10);
	s.push(15);
	cout<<s.size()<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
	return 0;
}
