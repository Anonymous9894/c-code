#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,m;
	printf("enter any number for m:");
	scanf("%d",&m);
	printf("enter any number for n:");
	scanf("%d",&n);
	a=m;
	while(a<=n)
	{
		printf("%d\n",a);
		a=a+1;//a++
	}
	getch();
}
