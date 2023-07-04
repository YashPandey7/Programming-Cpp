#include <iostream>
#include<stack>
#include < vector>
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
	
};

int main()
{
	Stack
	
	return 0;
}
