#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum;
	printf("enter any number");
	scanf("%d",&a);
	sum=0;
	b=1;
	while(b<=a)
	{
		sum=sum+b;
	    b++;
	}
	printf("addition of numbers till %d = %d",a,sum);
	getch();
}
