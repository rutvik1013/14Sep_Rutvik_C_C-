//write a program to sort the numbers using pointers and function.
#include<stdio.h>
int add(int a, int b);

{
	int a=50;
	prr=&a;
	int n,*p,i,j,temp;
	printf("\nhow many number:");
	scanf("%d",&n);
	p=(int *) mallon(n*2);
	if(p==NULL)
	{
		printf("\nMemory allocation unsuccessful");

	}
	int main()
	for(i=0;i<n;i++)
	{
		prinf("\nEnter number %d:",i+1);
		scanf("%d",&p+i);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i)
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
			
		}
	}
	printf("\nThe sorted numbers are:\n");
	for(i=0;i<n;i++)
	   printf("%d",*(p+i));
}
