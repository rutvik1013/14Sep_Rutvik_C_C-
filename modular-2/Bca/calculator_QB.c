// write a program to make simple calculator
#include<stdio.h>
int main(){
	int a,b;
	char op;
	
	printf("Enter 1st Number: \n");
	scanf("%d",&a);
	
	 printf("Enter Operand ('+', '-', '*', '/') \n: ");
     scanf(" %c", &op);
	
	printf("Enter 2nd Number:\n");
	scanf("%d",&b);
	
	switch(op){
		case'+':
			printf("Addition: %d",a+b);
			break;
			
		case '-':
			printf("Substraction: %d",a-b);
			break;
			
		case '*':
			printf("Multiplication: %d",a*b);
			break;
			
		case '/':
			printf("Division: %d",a/b);
			break;
			
			default:
				printf("Enter Valid Operands ");
				break;
				
					
	}
}
