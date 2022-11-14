//2) Number pattern
#include<stdio.h>
void main()
{
	int i,j,number=1;
	for(i=1;i<=4;i++)  // For rows
	{
		for(j=1;j<=i;j++)  // For columns
		{
			printf("%d",number);
			++number;
			
		}
		printf("\n");
	}
}	
