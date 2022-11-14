//write a origram to find out the max number from given 10 elements of array.
#include<stdio.h>
void main()
{
	int a[10],size,max,i;
	printf("Enter size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("maximum value of array:%d",max);
	
}
