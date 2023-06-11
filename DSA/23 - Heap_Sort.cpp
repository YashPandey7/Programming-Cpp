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
	for(int i=(n-2)/2; i>=0; i--)
	{
		maxHeapify(arr, n, i);
	}
}

void heapSort(int arr[] , int n)
{
	buildHeap(arr, n);
	for(int i=n-1; i>=1; i--)
	{
		swap(arr[i], arr[0]);
		maxHeapify(arr, i, 0);
	}
}

int main()
{
	int arr[5] = {3,2,1,9,8};
	heapSort(arr, 5);
	
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
