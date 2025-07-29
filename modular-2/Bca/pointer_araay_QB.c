//write a c program to acess Array elements using Pointers.
#include<stdio.h>
int main(){
	int a[10],i,n;
	int *ptr;
	
	ptr=a;
	
	printf("Enter Number of Elements in an Array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Elements %d: ",i+1);
		scanf("%d",ptr+i);
		
	}
	printf("\n Array Elements are:\n");
	for(i=0;i<n;i++){
		printf("Element %d = %d\n", i+1, *(ptr + i));
	
	}
}
