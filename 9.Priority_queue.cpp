#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue <int> pq;
	pq.push(10);
	pq.push(15);
	pq.push(5);
	
//	Max - Heap
	cout<<"Max-Heap  --  ";
	while(pq.empty()==false)
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	
	cout<<endl;
	priority_queue <int, vector<int>, greater<int>> pq1;
	pq1.push(10);
	pq1.push(15);
	pq1.push(5);
	
//	Mix - Heap
	cout<<"Min-Heap  --  ";
	while(pq1.empty()==false)
	{
		cout<<pq1.top()<<" ";
		pq1.pop();
	}
	
//	Sort array using priority queue
	cout<<"\nSorted array  --  ";
	int arr[] = {1,3,2,6,5,4};
	priority_queue <int, vector<int>, greater<int>> pq2(arr, arr+6);
	while(pq2.empty()==false)
	{
		cout<<pq2.top()<<" ";
		pq2.pop();
	}

//  K largest element
	cout<<"\nK largest elements --  ";
	int k=3;
	priority_queue <int> pq3(arr, arr+6);
	for(int i=0; i<k; i++)
	{
		cout<<pq3.top()<<" ";
		pq3.pop();
	}
	
	
	return 0;
}
