#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter any two numbers=\n");
	scanf("%d%d",&a,&b);
	printf("before swapping\n");
	printf("a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\n after swapping\n");
	printf("a=%d,b=%d",a,b);
}
swap(p,q)
int *p,*q;
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
	getch();
}
