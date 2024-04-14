#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum;
	sum=0;
	a=2;
	while(a<=10)
	{
		sum=sum+a;
		a=a+2;
	}
	printf("addition=%d",sum);
	getch();
}
