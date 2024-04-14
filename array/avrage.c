#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,b,c;
	float avg;
	b=0;
	printf("enter the 10 no=\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	b=b+a[i];
	avg=(b/10.0);
	printf("average=%f",avg);
	getch();
}
