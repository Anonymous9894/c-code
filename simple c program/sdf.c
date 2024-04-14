#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows;
	printf("enter value to define rows=\n");
	scanf("%d",&rows);
	printf("\n");
	for(i=rows;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	getch();
}
