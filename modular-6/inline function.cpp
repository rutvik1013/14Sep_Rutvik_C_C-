// Write a program o find multiplication value and cubic value using inline function.

#include<iostream>
using namespace std;

class value{
	public:
		inline int multi(int a, int b)
		{
			return(a*b);
			
		}
		inline int cube(int a)
		{
			return(a*a*a);
		}
};
int main()
{
	value v;
	
	int a,b;
	
	cout<<"Ennter two values:";
	cin>>a>>b;
	cout<<"\nMultiplication value is: "<<v.multi(a,b);
	cout<<"\nCubic value is: "<<v.cube(a);
	
	return 0;
}
