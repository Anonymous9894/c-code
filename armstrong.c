#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum,n1;
	sum=0;
	printf("enter any no");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==n1)
	{
		printf("arm");
	}
	else
	{
		printf("not arm");
	}
	getch();
}
