#include<iostream>
#include <queue>
using namespace std;

struct Node {
	int key;
	Node *left;
	Node *right;
	Node(int k)
	{
		key = k;
		left = right = NULL;
	}
};

void inorder(Node *root)
{
	if(root == NULL)
	{
		return ;
	}
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

void levelTraversal(Node *root)
{
	queue<Node *> q;
	
	if(root == NULL)
		return;
	q.push(root);
	while(!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		cout<<curr->key<<" ";
		if(curr->left)
		{
			q.push(curr->left);
		}
		if(curr->right)
		{
			q.push(curr->right);
		}
	}
}

void levelNewLine(Node *root)
{
	queue<Node *> q;
	if(root == NULL)
		return;
		
	q.push(root);
	q.push(NULL);
	
	while(q.size() > 1)
	{
		Node *curr = q.front();
		q.pop();
		
		if(curr == NULL)
		{
			cout<<endl;
			q.push(NULL);
		}
		else
		{
			cout<<curr->key<<" ";
			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
		}
	}
}


int main()
{
	Node *root = new Node(5);
	root->left = new Node(10);
	root->right = new Node(15);
	root->left->left = new Node(20);
	root->left->right = new Node(25);
	root->right->left = new Node(30);
	root->right->right = new Node(35);
	
	cout<<"Inorder DFS -->  ";
	inorder(root);
	
	cout<<endl<<"BFS -->  ";
	levelTraversal(root);
	
	cout<<"\nBFS -->  \n";
	levelNewLine(root);
	
	return 0;
}
