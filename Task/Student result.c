#include<stdio.h>
int main()
{
	int a[5],i,per,j,sum=0;
	float avg;
	printf("Enter no:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	sum=sum+a[i];
	printf("avg is %f",sum);
	per=sum*100/500;
	printf("\n percentage is:%f",per);
	if(per>=35)
	{
		printf("passing");
		
	}
	else
	{
		printf("fail");
	}
	return 0;
}
