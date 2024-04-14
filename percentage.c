#include<stdio.h>
#include<conio.h>
void main()
{
	float maths,science,english,percentage;
	printf("enter the marks of maths:\n");
	scanf("%f",&maths);
	printf("enter the marks of science:\n");
	scanf("%f",&science);
	printf("enter the marks of english:\n");
	scanf("%f",&english);
	percentage=(maths+science+english)/100;
	printf("percentage of given marks=%f",percentage);
	getch();
	
}
