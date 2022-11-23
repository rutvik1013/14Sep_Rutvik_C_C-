// Pointer to an Array.
#include<stdio.h>
int main()
{
	int a[5],b,*ptr;
	int i;
	printf("Enter value");
	scanf("%d",&b);
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("Value of a[%d]:%d\n",i,*ptr);
		ptr++;
		
	}
}
