// write a c program to calculate the average of first n numbers.
#include<stdio.h>
int main(){
	int n,i,sum=0,average;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=i;
		
		
	}
	average=sum/n;
	
	printf("The Average of First %d Natural Number is:%d \n",n,average);
	
	
	
}
