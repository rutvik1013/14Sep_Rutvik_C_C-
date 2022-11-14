//write a program to find fibonacci series using function.
#include<stdio.h>
int fibonacci(int);
int main()
{
	int limit;
	printf("Enter the number of term to be printed\n");
	scanf("%d",&limit);
	fibonacci(limit);
	return 0;
	
}
int fibonacci (int num)
{
	int n1=0,n2=1,n3,count;
	printf("fibonacci series...\n");
	printf("%d\n%d\n",n1,n2);
	for(count=3;count<=num;count++)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
}

