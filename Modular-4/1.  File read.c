
//write a program to read data from file.
#include<stdio.h>
int main()
{
	FILE *ptr;
	int num;
	ptr=fopen("Rutvik.txt","r");
	fscanf(ptr,"%d",&num);
	printf("The value of num is %d\n",num);
	
	return 0;
	
}
