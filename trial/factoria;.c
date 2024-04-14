#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=1,l=1;
	printf("enter any number");
	scanf("%f",&n);
	f=1;
	do
	{
		f=f*l;
		l++;
	}
	while(l<=n);
	printf("\nfactorial=%d is %d",n,f);
	getch();
}
