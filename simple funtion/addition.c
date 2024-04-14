#include<stdio.h>
#include<conio.h>
add()
{
	int  a,b,c;
	printf("enter any two number=\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("addition of two number=%d",c);
}
void main()
{
	add();
	getch();
}
