//write a program to find simple interest & compound interest
#include<stdio.h>
#include<math.h>
void main()
{
	float p,r,t,a,si,ci;
	printf("Enter the value of principal:");
	scanf("%f",&p);
	printf("Enter the value of rate:");
	scanf("%f",&r);
	printf("Enter the value of time:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("\n simple interest is %f",si);
	a=p*(pow((1+r/100),t));
	ci=a-p;
	printf("\n compound interest is %f",ci);
}
