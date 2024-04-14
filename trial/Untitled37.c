#include<stdio.h>
#include<conio.h>
void main()
{
	int a,m,n;
	printf("enter any number for n");
	scanf("%d",&n);
	printf("enter any number for m");
	scanf("%d",&m);
	a=n;
	while(a<=m)
	{
		printf("%d\n",a);
		a=a+1;
	}
	getch();
}
