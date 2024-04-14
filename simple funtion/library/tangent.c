#include<stdio.h>
#include<conio.h>
#include<math.h>
tangent()
{
	float n,tangent;
	printf("enter any number: ");
	scanf("%f",&n);
	tangent=tan(n);
	printf("value of tan(%f)=%f",n,tangent);
}
void main()
{
	tangent();
	getch();
}
