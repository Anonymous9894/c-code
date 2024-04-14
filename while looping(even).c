#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	if (a=a+2)
	while(a<=10)
	{
		printf("%d\n",a);
		a=a/2;
	}
	else
	{
	printf("ERROR");
    }
	getch();
}
