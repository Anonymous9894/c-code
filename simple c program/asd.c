#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,num,m;
	printf("enter the value to define rows & column=\n");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=num-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}
