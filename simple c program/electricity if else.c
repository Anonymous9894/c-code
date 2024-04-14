#include<stdio.h>
#include<conio.h>
void main()
{
	float unit;
	printf("enter the unit of the house:\n");
	scanf("%f",&unit);
	if(unit==0)
	printf("no power used");
	else	if(unit>=100)
	printf("charges will be 5rs per unit");
	else if(unit<=100)
	printf("\ncharges will be 4rs per unit");
	else if(unit<=50)
	printf("\ncharges will be 3rs per unit");
	else
	printf("\ncharges will be 10 rs per unit");	
	getch();
	
}
