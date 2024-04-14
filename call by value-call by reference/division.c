#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	a=20;
	b=30;
	Fun(a,b);
	getch();
}
Fun(int m,int n)
{
	m/=4;
	n/=6;
	printf("after division\n");
	printf("%d\n%d\n",m,n);
}
