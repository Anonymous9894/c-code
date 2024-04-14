#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,l;
	printf("enter 10 no's\n\t");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=0;i<=9;i++)
	{
		if(l<a[i])
		l=a[i];
	}
	printf("\n larger no's is ==>%d",l);
}
