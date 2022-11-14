//write a program of print a number and check the number is palindrome or not using recursive function.
#include<stdio.h>
int main()
{
	int num,p;
	printf("Enter any number:");
	scanf("%d",&num);
	p=rev(num);
	if(p==num)
	   printf("%d is palindrome number");
	else
	   printf("%d is not palindrome number");
	
}
int rev(int n)
{
	static int t=0;
	if(n==0)
       return  t;
	t=(t*10)+(n%10);
	return rev(n/10);   	
}
