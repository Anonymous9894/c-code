#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	a=0.5;
	do
	{
		printf("%f\n",a);
		a=a+0.5;
	}
	while(a<=9.5);
	getch();
}
