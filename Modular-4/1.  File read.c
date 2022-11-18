//write a program to read data from file.
#include<stdio.h>
int main()
{
	int a,b;
	FILE *ptr;
	ptr= fopen("14 sep_Rutvik_c_c++","R");
	fscanf(ptr,"%d %d",&a,&b);
	printf("The values of a and b is %d %d\n",a,b);
	
	return 0;
	
}
