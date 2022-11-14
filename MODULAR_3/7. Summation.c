//Write a program to make summation of given number(E.G 1523  ans:11)
#include<stdio.h>
void main()
{
	int n,sum=0,r;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	printf("sum of digits:%d",sum);
}
