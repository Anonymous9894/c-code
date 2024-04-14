#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n,sum=0;
	printf("enter any n number");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("sum is =%f",sum);
	getch();
}
