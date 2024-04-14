#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum,n1;
	sum=0;
	printf("enter any number");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n addition of %d is %d",n1,sum);
	getch();
}
