#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,rem,rev,n;
	printf("enter any number");
	scanf("%d",&n);
	n1=n;
	rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rem+(rev*10);
		n=n/10;
	}
	printf("reverse==%d",rev);
	if(n1==rev)
	printf("\n it is palindrome");
	getch();
}
