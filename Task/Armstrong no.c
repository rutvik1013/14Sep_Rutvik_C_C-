//check if the number is Armstrong no. or not.
#include<stdio.h>
int main()
{
	int n,a,b,arm=0;
	printf("Enter any number:");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		a=n%10;
		arm=(a*a*a)+arm;
		n=n/10;
		
	}
	if(b==arm)
	printf("Armstrong number");
	else
	printf("Not Amstrong number");
	return 0;
}
