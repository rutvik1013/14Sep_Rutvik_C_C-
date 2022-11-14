//write a program to check the given year is leap year or not
#include<stdio.h>
void main()
{
	int y;
	printf("Enter any year:");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0)
	{
		printf("year is leap year");
		
	}
	else
	
	{
		printf("year is not leap year");
	}
}
