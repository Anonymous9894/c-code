#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,n,m,a;
	printf("enter any initial number for a:");
	scanf("%d",&m);
	printf("enter any final number for b:");
	scanf("%d",&n);
	a=m;
	sum=0;
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("\n addition is %d ",sum);
	getch();
}
