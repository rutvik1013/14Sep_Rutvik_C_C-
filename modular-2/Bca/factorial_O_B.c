// Write a program to find fectorial of given number in c.

// From Function

//#include<stdio.h>
//long int factorial(int n);
//int main(){
//	int n;
//	
//	printf("Enter the Number:");
//	scanf("%d",&n);
//	
//	printf("Factorial of %d is %d ",n,factorial(n));
//	
//}
//long int factorial(int n){
//	if(n<=1){
//		return 1;
//		
//	}
//	else{
//		 return n=n*factorial(n-1);
//	
//		
//	}
//}

#include<stdio.h>
int main(){
	int i,n,fact=1;
	
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
		
	}
	printf("Factorial of %d is: %d\n",n,fact);
	
	
	
	
}
