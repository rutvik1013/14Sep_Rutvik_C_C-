// write a program to find largest number among three numbers.
#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter 1st Number:\n");
	scanf("%d",&a);
	
	printf("Enter 2nd Number:\n");
	scanf("%d",&b);
	
	printf("Enter 3rd Number:\n");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("The Largest Number is:%d\n",a);
		}
		else{
			printf("The Largest Number is: %d\n",c);
		}
	}
	else{
		if(b>c){
			printf("The Largest Number is:%d\n",b);
		}
		else{
			printf("The Largest Number is:%d\n",c);
			
		}
	}
}
