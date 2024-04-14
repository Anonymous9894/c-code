#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	a=10;
	b=10;
	Fun(a,b);
	getch();
}
Fun(int m,int n)
{
	m+=55;
	n+=5;
	printf("after increment\n");
	printf("%d\n%d\n",m,n);
}
