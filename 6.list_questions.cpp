#include<iostream>
#include<forward_list>
#include<list>
#include<algorithm>
using namespace std;

void print(list <int> l)
{
	for(auto x:l)
		cout<<x<<" ";
		
	cout<<"\n\n";
}

int main()
{
	int arr[]={1,2,3,4,5};
	list <int> l ;
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	
	int op;
	cin>>op;
	switch(op)
	{
		case 1:
			int x;
			cin>>x;
			l.push_back(x);
			print(l);
			break;
			
		case 2:
			l.sort();
			print(l);
			break;
			
		case 3:
			l.reverse();
			print(l);
			break;
			
		case 4:
			cout<<l.size();
			break;
		
		case 5:
			print(l);
			break;
			
		case 6:
			l.pop_back();
			print(l);
			break;
			
		case 7:
			l.pop_front();
			print(l);
			break;
			
		case 8:
			int y;
			cin>>y;
			l.push_front(y);
			print(l);
			break;
			
		default:
			cout<<"Wrong option";
			
	}
}

		
	
	
//	forward_list <int> fl;
//	
//	for(int i=0;i<5;i++)
//	{
//		fl.push_front(arr[i]);
//	}
//	
//	for(auto x:fl)
//		cout<<x<<" ";
//		
//	auto it = fl.begin();
//	fl.erase_after(it);
//	cout<<endl;
//	for(auto x:fl)
//		cout<<x<<" ";
	
	return 0;
}
