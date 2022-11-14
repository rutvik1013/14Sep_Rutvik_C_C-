//Addition of two arrays without assigning direct dynamic value to an array variable.
#include<stdio.h>
int main()
{
	int a[2][2],i,j,sum=0;
	printf("Enter Elements in array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		printf("sum of array elements:");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			
			{
				sum=sum+a[i][j];
				
			}
			printf("%d",sum);
			
		}
		return 0;
	}
	
}
