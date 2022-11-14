//write a program to concatenate the two string using pointer.
#include<stdio.h>
#include<string.h>
int main()
{
	char fnm[15],lnm[10];
	int *ptr,a;
	ptr=&a;
	printf("\nEnter first name:",fnm);
	scanf("%s",&fnm);
	printf("\n Enter your last name:",lnm);
	scanf("%s",&lnm);
	strcat(fnm,lnm);
	printf("\n your full name is:%s",fnm);
	return 0;
}
