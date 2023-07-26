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
//		cout<<q.front()->key<<" ";
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

int main()
{
	Node *root = new Node(5);
	root->left = new Node(10);
	root->right = new Node(15);
	root->left->left = new Node(20);
	root->left->right = new Node(25);
	
	cout<<"Inorder DFS -->  ";
	inorder(root);
	
	cout<<endl<<"BFS -->  ";
	levelTraversal(root);
	return 0;
}
