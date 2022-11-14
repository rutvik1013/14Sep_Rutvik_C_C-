//write a program to find find out the Max number of given Matrix.
#include<stdio.h>
int main()
{
	int a[3][4];
	int i,j;
	int max;
	printf("Enter the value of matrix A");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(max < a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	printf("Maximum element in matrix is:%d",max);
	return 0;
	
	
}
