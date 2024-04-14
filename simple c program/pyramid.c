#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	printf("enter a no to define row\n");
	scanf("%d",&row);
	printf("\n");
	for (i=1;i<=row;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}
