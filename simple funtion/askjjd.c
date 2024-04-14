#include<stdio.h>
#include<conio.h>
#include<math.h>
cs()
{
	float n,cs;
	printf("enter any number: ");
	scanf("%f",&n);
	cs=cos(n);
	printf("value of cos(%f)=%f",n,cs);
}
void main()
{
	cs();
	getch();
}
