#include<stdio.h>
int main()
{
	int a,b,r;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nBefore value swapping value of a is:%d and b is:%d",a,b);
	a=15;
	b=20;
	r=a;
	a=b;
	b=r;
	printf("\n After value swapping value of a is:%d and b is:%d",a,b);
	return 0;
}
