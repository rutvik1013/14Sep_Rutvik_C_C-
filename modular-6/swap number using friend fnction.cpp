// Write a program to swap the two numbers using using friend function.

#include<iostream>
using namespace std;

class temp{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter two numbers:";
			cin>>a>>b;
		}
		friend void swap(temp &t);
		void display()
		{
			cout<<"After swap a is:"<<a;
			cout<<"\nAfter swap b is:"<<b;
		}
		
};
void swap(temp &t)
{
	t.c=t.a;
	t.a=t.b;
	t.b=t.c;
}
int main()
{
	temp t;
	t.getdata();
	
	swap(t);
	t.display();
	
	return 0;
}
