//write a program to sort the array of 5 elements.
#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("Enter Array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("Enter Array element:");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
