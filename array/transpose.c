#include<stdio.h>
#include<conio.h>
int main()
{
	int a[15][15],transpose[15][15],r,c,i,j;
	printf("enter the number of rows & column=\n");
	scanf("%d%d",&r,&c);
	printf("\n enter the matrix element=\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf("enter element a%d%d=",i+1,j+1);
		scanf("%d",&a[i][j]);
		
	}
	printf("\n Enter the matrix=\n");
	for (i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf("\t%d",a[i][j]);
		if(j==c-1)
		printf("\n");
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		transpose[j][i]=a[i][j];
	}
	printf("transpose of matrix=\n");
	for(i=0;i<c;i++)
	for(j=0;j<r;j++)
	{
		printf("\t%d",transpose[i][j]);
		if(j==r-1)
		printf("\n");
	}
	getch();
} 
