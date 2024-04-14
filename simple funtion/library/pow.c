#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float n,m,p;
	printf("enter any two number");
	scanf("%f%f",&n,&m);
	p=pow(n,m);
	printf("value of %f raised %f is %f",n,m,p);
	getch();
}
