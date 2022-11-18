#include<stdio.h>
int main()
{
	FILE *fptr;
	int num,i;
	printf("Enter the integer you need the table of\n");
	scanf("%d",&num);
	fptr=fopen("multiplication table.txt","R");
	fscanf("%d",&num);
	fptr =fopen("multiplication table.txt","w");
	for(i=0;i<10;i++)
	{
		fprintf(fptr,"%dX%d=%d\n",num,i+1,num*(i+1));
	}
	fclose(fptr);
	return 0;
}
