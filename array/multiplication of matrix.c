#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	system("cls");
	printf("enter no's rows");
	scanf("%d",&r);
	printf("enter no's column");
	scanf("%d",&c);
	printf("enter 1st matrix element=\n");
	for (i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	printf("enter 2nd matrix element=\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);
	printf("multiplication of the matrix=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(i=0;i<c;i++)
		{
		printf("%d\t",mul[i][j]);
	}
	printf("\n");
    }
	getch();
}
