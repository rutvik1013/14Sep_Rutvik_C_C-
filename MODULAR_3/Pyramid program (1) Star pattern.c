// pyramid programs
//1) star pattern
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)  //For Rows
	{
		for(j=1;j<=i;j++) //For Column
		{
			printf("*");
			
		}
		printf("\n");
	}
}
