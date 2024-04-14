#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum,m,n;
	printf("enter starting number");
	scanf("%d",&m);
	printf("enter last number");
	scanf("%d",&n);
	sum=0;
	a=m;
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("addition of m to n number=%d\n",sum);
	getch();
	
}
