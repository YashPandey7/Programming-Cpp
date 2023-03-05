#include<iostream>
using namespace std;

class math{
		
	private:
		int x,y;
	
	public:
		void set_data(int a, int b){
			x=a;
			y=b;
		}
		
		void display_data();
};

void math:: display_data()
{
	cout<<x<<" "<<y<<endl;
}

int main()
{
	math m1;
	m1.set_data(5,3);
	m1.display_data();
	
	return 0;
}
