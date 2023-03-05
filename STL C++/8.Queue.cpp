#include<iostream>
#include<stack>
#include<queue>
using namespace std;

	void rev_queue(queue <int> q, int k)
	{

	stack <int> s;
	for(int i=0; i<k ; i++)
	{
		s.push(q.front());
		q.pop();
	}
	
	for(int i = 0; i<k ; i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	while(q.empty() == false)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	
	}

int main()
{
	queue <int> que;
	
	for(int i=1; i<=5 ; i++)
	{
		que.push(i*2);
	}
	
	rev_queue(que,3);
	
	return 0;
}
