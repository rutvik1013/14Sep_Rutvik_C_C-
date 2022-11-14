//write a program of structure for five employee that provides the following information print and display empno,empname, adress and age.
#include<stdio.h>
struct employee
{
	
	int empno[5];
	char empname[20];
	char empadress[50];
	int empage[2],i;
	
};
int main()
{
	struct employee e[5];
	int i;
	printf("Enter Employee information\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Employee empno:");
		scanf("%d",&e[i].empno);
		printf("Enter empname:");
		scanf("%s",&e[i].empname);
		printf("Enter empadress:");
		scanf("%s",&e[i].empadress );
		printf("Enter empage:");
		scanf("%d",&e[i].empage);
		
	}
	printf("Employee information\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("empno: %d\n",e[i].empno);
		
		printf("empname: %s\n",e[i].empname);
		
		printf("empadress: %c\n",e[i].empadress);
		
		printf("empage: %d\n",e[i].empage);
	}
	return 0;
}
	
	


