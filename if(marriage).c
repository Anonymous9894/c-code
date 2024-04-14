#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("enter the age of person:");
	scanf("%d",&age);
	if(age>=21)
	{
		printf("this person is eligible for marriage");
	}
	else
	{
		printf("this person isn't eligible for marriage");
	}
	getch();
}
