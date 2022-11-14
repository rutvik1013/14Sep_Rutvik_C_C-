//write a program of find the elements of given position from the array.
#include<stdio.h>
int main()
{
	int a[50],pose,size,item,i;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter elements in array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter position that you want to insert:");
	scanf("%d",&pose);
	printf("Enter item that you want to insert:");
	scanf("%d",&item);
	for(i=size;i>=pose;i--)
	{
		a[i]=a[i-1];
		
	}
	a[pose]=item;
	size++;
	printf("Resultant array elements:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
