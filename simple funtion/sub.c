#include<stdio.h>
#include<conio.h>
sub()
{
	int a,b,c;
	printf("enter any number");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("subtraction of a & b: %d",c);
}
void main()
{
	sub();
	getch();
}
