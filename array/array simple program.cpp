#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	print("enter 10 number:-");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
