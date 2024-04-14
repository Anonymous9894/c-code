#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,r,c;
	printf("enter the number of rows & column:\n");
	scanf("%d%d",&r,&c);
	printf("enter the value of 1st matrix=\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	printf("enter the value of 2nd matrix=\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);
	printf("sum of the matrix=\n");
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
