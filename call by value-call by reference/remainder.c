#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	a=205;
	b=302;
	Fun(a,b);
	getch();
}
Fun(int m,int n)
{
	m%=2;
	n%=3;
	printf("remainder after division\n");
	printf("%d\n%d\n",m,n);
}
