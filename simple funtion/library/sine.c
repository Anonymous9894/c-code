#include<stdio.h>
#include<conio.h>
#include<math.h>
sine()
{
	float n,sine;
	printf("enter any number: ");
	scanf("%f",&n);
	sine=sin(n);
	printf("value of sin(%f)=%f",n,sine);
}
void main()
{
	sine();
	getch();
}
