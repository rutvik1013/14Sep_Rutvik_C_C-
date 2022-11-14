//write a program to chack the given number is prime or not prime
#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			
		}
	}
	if(count==2)
	printf("prime number");
	else
	printf("not prime number");
	
}
