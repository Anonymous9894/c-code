#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("enter any n number");
	scanf("%d",&n);
	for(i=2;i<=n;i+2)
	{
		sum=sum+i;
	}
	printf("sum is =%d",sum);
	getch();
}
