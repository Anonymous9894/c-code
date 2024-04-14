#include<stdio.h>
#include<conio.h>
void main()
{
	float a,n;
	printf("enter first number");
	scanf("%f",&a);
	printf("Enter last number");
	scanf("%f",&n);
	while(a<=n)
	{
	printf("%f\n",a);
	a=a+0.5;
	}
	getch();
}
