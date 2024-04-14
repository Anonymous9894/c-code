#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	int *p,*q;
	float f;
	a=10; b=20;
	p=&a;
	q=&b;
	c=*p+*q;
	d=*p-*q;
	e=*p**q;
	f=*p/ *q;
	printf("addition is a&b is=%d\n",c);
	printf("subtraction is a&b is=%d\n",d);
	printf("multiplication is a&b is=%d\n",e);
	printf("division is a&b is=%d\n",f);
	getch();
}
