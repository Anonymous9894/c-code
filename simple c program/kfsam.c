#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,rows;
	printf("enter any no=\n");
	scanf("%d",&rows);
	printf("\n");
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("%d",k);
	}
	printf("\n");
}
getch();
}
