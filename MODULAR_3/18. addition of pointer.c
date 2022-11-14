//write a program to make an addition of two number using pointer.
#include<stdio.h>
int main()
{
	int *p,*q,r,a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	p=&a;
	q=&b;
	r=*p + *q;
	printf("sum of numbers:%d",r);
	return 0;
}
