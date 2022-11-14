//write a pprogram to find out the factorial of given number using function.
#include<stdio.h>
long int facto (int no)
{
	if (no <= 1)
	return 1;
	return no * facto(no - 1);
	
}
int main()
{
	int no;
	printf("Enter no. to get it's factorial:");
	scanf("%d",&no);
	printf("factorial of %d is:%ld",no,facto(no));
}
