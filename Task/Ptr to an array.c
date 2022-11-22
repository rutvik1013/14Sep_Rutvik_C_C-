// Pointer to an Array.
#include<stdio.h>
int main()
{
	int a[5]={10.20,30,40,50};
	int i;
	int *ptr;
	
	ptr=a;
	
	for(i=0;i<5;i++)
	{
		printf("Value of a[%d]:%d\n",i,*ptr);
		ptr++;
		
	}
}
