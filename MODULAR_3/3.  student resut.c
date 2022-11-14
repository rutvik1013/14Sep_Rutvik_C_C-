#include<stdio.h>
void main()
{
	

	float per;
	int Total;
	int G,E,M,A,H;
	
	printf("\nEnter the marks of Gujarati:");
	scanf("%d",&G);
	
	printf("\nEnter the marks of English");
	scanf("%d",&E);
	
	printf("\nEnter the marks of Maths");
	scanf("%d",&M);
	
	printf("\nEnter the marks of Accountancy");
	scanf("%d",&A);
	
	printf("\nEnter the marks of Hindi");
	scanf("%d",&H);
	
	Total=G+E+M+A+E;
	printf("Total marks: %d",Total);
	
	per=Total/5;
	printf("\npercentage %f",per);
	
	if(per>100)
	printf("value  is greater than 100% entered a valid value");
	else if (per>75)
	   printf("\n Distinction");
	else if ( per>60 &&  per<=75)
	   printf("\n First class");
	else if (per>50  && per<=60)
	   printf("\n second class");
	 else if (per>35 && per<=50)
	    printf("\n pass class");
	else
	    printf("\n fail");	          
}
