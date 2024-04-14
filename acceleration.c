//program....
#include<stdio.h>
#include<conio.h>
void main()
{
	float distance,time,acceleration;
	printf("enter the distance covered:\n");
	scanf("%f",&distance);
	printf("enter the time taken:\n");
	scanf("%f",&time);
	acceleration=distance/time;
	printf("acceleration of covered distance and time taken=%f",acceleration);
	getch();
	
}
