#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=1,l=1;
	printf("enter any number");
	scanf("%d",&n);
	f=1;
	do
	{
		f=f*l;
		l++;
	}
	while(l<=n);
	printf("\n factorial=%d is %d",n,f);
	getch();
}
