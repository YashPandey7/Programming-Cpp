#include<iostream>
using namespace std;

class complex{
	
	private:
		int x,y;
	
	public:
		void setdata(int a, int b){
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<x<<" "<<y;
		}
		
		complex add(complex c)
		{
			complex temp;
			temp.x = x + c.x;
			temp.y = y + c.y;
			
			return(temp);
		}
	
};

int main()
{
	complex c1,c2;
	c1.setdata(5,3);
	c2.setdata(5,7);
	
	complex c3;
	c3 = c1.add(c2);
	c3.display();
	
	return 0;
}
