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
		if(front == 0)
			return 1;
		return 0;
	}
	
	bool isFull(){
		if(size == cap)
			return true;
		return false;
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
			if(rear == 0){
				front++;
			}
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
			front = (front+1)%cap;
			cout<<front<<endl;
			size--;
		}
	}
	
};
