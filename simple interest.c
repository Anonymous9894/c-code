#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,SI;
	printf("enter the value of principle=\n");
	scanf("%f",&p);
	printf("enter the value of rate of interest=\n");
	scanf("%f",&r);
	printf("enter the value of No of year=\n");
	scanf("%f",&n);
	SI=(p*r*n)/100;
	printf("Simple Interest=%f",SI);
	getch();
}
