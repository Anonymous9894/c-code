#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("enter the age of voter:");
	scanf("%d",&age);
	if (age>18)
	printf("this person is eligible for voting");
	else
	printf("this person is not eligible for voting");
	getch();
}

