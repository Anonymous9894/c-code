#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,rev;
	printf("enter any number");
	scanf("%d",&n);
	rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rem+(rev*10);
		n=n/10;
	}
	printf("reverse==%d",rev);
	getch();
}
