#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,rows,m=1;
	printf("enter any value to define rows & column:\n");
	scanf("%d",&rows);
	printf("\n");
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=rows;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		rows++;
		printf("\n");
	}
	getch();
}
