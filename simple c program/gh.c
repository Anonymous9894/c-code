#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,rows;
	printf("enter any no to define row & column=\n");
	scanf("%d",&rows);
	int space=rows-1,num=1;
	printf("\n");
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=1;k<=num;k++)
		{
			printf("*");
		}
			if(space>i)
			{
				space=space-1;
				num=num+2;
			}
			if(space<i)
			{
				space=space+1;
				num=num-2;
			}
			printf("\n");
	}
    getch();
}
	
