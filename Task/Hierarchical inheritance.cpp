// Write a program on heirarichical inharitance.

#include<iostream>
using namespace std;

class Calc

{
	public:
		int a,b;
		void getdata()
		{
			cout<<"\nEnter value of a and b:\n";
			cin>>a>>b;
		}		
};
class A: public Calc
{
	public:
		void sum()
		{
			cout<<"\nSum= " <<a+b;
		}
};
class B: public Calc
{
	public:
		void sub()
		{
			cout<<"\nSubstraction= " <<a-b;
		}
};
class C: public Calc
{
	public:
		void product()
		{
			cout<<"\nProduct= " <<a*b;
		}
};
class D: public Calc
{
	public:
		void division()
		{
			cout<<"\nDivision="<<a/b;
		}
};
int main()
{
	Calc obj;
	A obj1;
	B obj2;
	C obj3;
	D obj4;
	
	obj1.getdata();
	obj1.sum();
	obj2.sub();
	obj3.product();
	obj4.division();
	
	return 0;
}

