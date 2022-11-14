//write a program to find out the area of Triangle,Rectangle and Circle using Switch Case.
#include<stdio.h>
void main()
{
	int base,height;
	int length,breadth;
	int cd;
	float radius,area;
	
	printf("Menu\n");
	printf("1. Triangle\n");
	printf("2. Rectangle\n");
	printf("3. Circle\n");
	
	printf("Enter fig_code:");
	scanf("%d",&cd);
	
	switch(cd)
	{
		case 1:
			printf("Enter Base:");
			scanf("%d",&base);
			printf("Enter height:");
			scanf("%d",&height);
			area=(base*height);
			printf("Area of Triangle=%f",area);
			break;
		case 2:
			printf("Enter length:");
			scanf("%d",&length);
			printf("Enter breadth: ");
			scanf("%d",&breadth);
			area=length*breadth;
			printf("Area of rectangle= %f",area);
			break;
		case 3:
			printf("Enter radius:");
			scanf("%f",&radius);
			area=3.14*radius*radius;
			printf("Area of circle =%f",area);
			break;
		defaault:
		printf("incorrect fig_code");	
	}
}
