// write a program to read and write data from file.
#include<stdio.h>
int main()
{
	char name[20];
	int id;
	float per;
	FILE *fptr;
	printf("Enter your details:");
	scanf("%d %f",&id,&per);
	fptr=fopen("student.txt","W");
	fprintf(fptr,"%s %d %f",name,id,per);
	fclose(fptr);
	
	fptr=fopen("student.txt","R");
	fscanf(fptr,"%s %d %f",&name,&id,&per);
	fclose(fptr);
    
	printf("Name:%s\nid:%d\nper:%f",name,id,per);	
}
