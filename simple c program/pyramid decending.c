#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
    }
    getch();
}
