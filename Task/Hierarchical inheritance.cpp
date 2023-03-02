// Wrie a program to find  addotion,Substraction of two numbers  using hierarchical inharitance.

#include<iostream>
using namespace std;

class audit{
	public:
		int a,b;
		void getdata()
		{
			cout<<endl<<"Enter Two Numbers: "<<endl;
			cin>>a>>b;
		}
};
class A: public audit{
	public:
	void sum()
	{
		cout<<"Addition: "<<a+b<<endl;
		
	}
};
class B: public audit{
	public:
	void sub()
	{
		cout<<"Substraction: "<<a-b<<endl;
	}
};
class C: public audit{
	public:
		void multi()
		{
			cout<<"Multiplication: "<<a*b<<endl;
			
		}
};
class D: public audit{
	public:
		void div()
		{
			cout<<"Division: "<<a/b<<endl;
			
		}
};
int main()
{
	A a1;
	B b1;
	C c1;
	D d1;
	
	a1.getdata();
	a1.sum();
	
	b1.getdata();
	b1.sub();
	
	c1.getdata();
	c1.multi();
	
	d1.getdata();
	d1.div();
	
	return 0;
}
