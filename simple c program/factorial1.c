#include<stdio.h>
#include<conio.h>
void main()
{
	int a,l=1,f=1;
	printf("enter any number");
	scanf("%d",&a);
	f=l;
	do
	{
		f=f*l;
		l++;	
	}
	while(l<=a);
	printf("\n factorial %d is %d",a,f);
	getch();
}
