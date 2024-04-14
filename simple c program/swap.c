#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	printf("\na=%d\nb=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n after swapping");
	printf("\na=%d\nb=%d",a,b);
	getch();
}
