#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,co;
	a=0;
	b=1;
	printf("%d\t %d/t",a,b);
	co=3;
	while(co<=10)
	{
		c=a+b;
		printf("%d\t ",c);
		a=b;
		b=c;
		co=co+1;
	}
	getch();
}
