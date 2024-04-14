#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	int weight;
	printf("enter the value of age");
	scanf("%d",&age);
	printf("enter the value of weight");
	scanf("%d",&weight);
	if(age>=18)
	if(weight>=50)
	printf("you are eligible for blood donation");
	else
	printf("you are not eligible for blood donation");
	getch();
}
