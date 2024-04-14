#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	for(i=1;i<=5;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			printf(" %d",a);
			a++;
		}
		printf("\n");
	}
	getch();
}
