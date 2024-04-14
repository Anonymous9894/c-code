#include<stdio.h>
#include<conio.h>
void main()
{
	float d,t,v;
	printf("enter the distance and time to calculate velocity=\n");
	scanf("%f%f",&d,&t);
	v=d/t;
	printf("velocity=%f",v);
	getch();
}
