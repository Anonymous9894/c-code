#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	printf("enter 10 number:-");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
