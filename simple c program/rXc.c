#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,column;
	printf("enter a number to define row and column=\n");
	scanf("%d%d",&row,&column);
	printf("\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf(" a");
		}
		printf("\n");
	}
	getch();
}
