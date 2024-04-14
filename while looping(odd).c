#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	while(a<=10)
	{
		printf("%d\n",a);
		a=a+2;
	}
	getch();
}
