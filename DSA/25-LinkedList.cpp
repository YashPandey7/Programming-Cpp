#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node (int x)
	{
		data = x;
		next = NULL;
	}
}

int main()
{
	Node *head = new Node(10);
	head->next = new Node(20);
	
	return 0;
}
