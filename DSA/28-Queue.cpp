#include<iostream>
using namespace std;

struct queue{
	int *arr;
	int front, cap,size;
	
	queue(int c)
	{
		arr = new int[c];
		cap = c;
		size = 0;
		front =0;
	}
	
	bool isEmpty(){
		return (size == 0);
	}
	
	bool isFull(){
		return (size == cap);
	}
	
	int getFront()
	{
		if(isEmpty())
			return -1;
		return front;
	}
	
	int getRear(){
		if(isEmpty())
			return -1;
		return (front + size - 1)%cap;
	}
	
	void enqueue(int x)
	{
		if(isFull())
			return ;
		else
		{
			int rear = getRear();
			rear = (rear + 1)%cap;
			arr[rear] = x;
			size++;	
		}
	}
	
	void dequeue()
	{
		if(isEmpty())
			return ;
		else
		{
			cout<<arr[front]<<endl;
			front = (front+1)%cap;
			size--;
		}
	}
	
	void size1()
	{
		cout<<size<<endl;
	}
};

int main()
{
	queue q(5);
	q.enqueue(2);
	q.enqueue(5);
	q.enqueue(6);
	
	q.size1();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	cout<<q.isEmpty();
}
