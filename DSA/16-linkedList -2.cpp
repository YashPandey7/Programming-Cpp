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
};

Node *traverse(Node *head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
}

int search(Node *head, int x)
{
	int count = 1;
	while(head != NULL && head->data != x)
	{
		count++;
		head = head->next;
	}
	if(head == NULL)
	{
		return (-1);
	}
	return count;
}

int main()
{
	Node *head = new Node(5);
	head->next = new Node(10);
	head->next->next = new Node(15);
	head->next->next->next = new Node(20);
	traverse(head);
	cout<<endl<<search(head, 21);
	
	return 0;
}
