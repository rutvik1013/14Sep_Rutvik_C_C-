//write a program to copy string from one string to another string with user define function.
#include<stdio.h>
#include<string.h>
char add(char a, char b)
{
	return a+b;
	
}
int main()
{
	char str1[5],str2[5];
	printf("Enter the 1st string:");
	scanf("%s",&str1);
	strcpy(str2,str1);
	printf("\n2nd string is:%s",str2);
	return 0;
}
