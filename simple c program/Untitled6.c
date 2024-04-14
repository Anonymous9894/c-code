#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter any number:\n");
	scanf("%d",&n);
	if(n<0)
	printf("number is negative");
	else
	if(n==0)
	printf("ZERO");
	else
	if(n<=10)
	printf("number is too small");
	else
	if(n<=100)
	printf("number is small");
	else
	if(n<=1000)
	printf("number is greater");
	else
	if(n<=100000)
	printf("number is much greater");
	getch();
	
}
