#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
		printf("enter any two numbers:\n");
		scanf("%d%d",&a,&b);
		printf("\na=%d \nb=%d",a,b);
		c=a;
		a=b;
		b=c;
		printf("\n after swapping");
		printf("\n a=%d \nb=%d",a,b);
		getch();
}
