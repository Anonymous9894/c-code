#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	printf("enter any number");
	scanf("%d",&number);
	if (number>0)
	printf("it is an positive number");
	if (number<0)
	printf("it is a negative number");
	else 
	printf("it is a zero");
	getch();
}
