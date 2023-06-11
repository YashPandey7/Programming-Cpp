#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i)
{
	int largest = i, left = 2*i+1, right = 2*i+2;
	if(left<n && arr[largest] < arr[left])
	{
		largest = left;
	}
	if(right<n && arr[largest] < arr[right])
	{
		largest = right;
	}
	
	if(largest != i)
	{
		swap(arr[i], arr[largest]);
		maxHeapify(arr,n,i);
	}
}

void buildHeap(int arr[], int n)
{
	
}

int main()
{
	
	return 0;
}
