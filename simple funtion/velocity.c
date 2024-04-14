#include<stdio.h>
#include<conio.h>
velocity()
{
	int velocity,distance,time;
	printf("enter distance and time ");
	scanf("%d%d",&distance,&time);
	velocity=distance/time;
	printf("velocity=%d",velocity);
	
}
void main()
{
	velocity();
	getch();
}
