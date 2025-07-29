// write a c program to print String is Palindrom or not.
#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	
	printf("Enter String: ");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0){
		printf("String is Palindrom\n");
	}
	else{
		printf("String is Not Palindrom\n");
		
	}
	return 0;
	
}
